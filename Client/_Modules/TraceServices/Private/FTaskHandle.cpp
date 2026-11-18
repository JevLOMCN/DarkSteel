// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 1

// Launch<TraceServices::FTableMergeTask> @ 14d41b8f0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::Tasks::Private::FTaskHandle::Launch<TraceServices::FTableMergeTask>
          (FTaskHandle *this,wchar_t *param_1,FTableMergeTask *param_2,ETaskPriority param_3,
          EExtendedTaskPriority param_4,ETaskFlags param_5)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  undefined8 *puVar5;
  FTaskBase *pFVar6;
  code *pcVar7;
  bool bVar8;
  FTaskBase *this_00;
  undefined8 *puVar9;
  
  if ((this->Pimpl).Reference != (FTaskBase *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Task.h"
                       ,0x77,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  this_00 = FMemory::Malloc(0x180,0x40);
  if (this_00 == (FTaskBase *)0x0) {
    this_00 = (FTaskBase *)0x0;
  }
  else {
    FTaskBase::FTaskBase(this_00,2,true);
    this_00->_padding_ =
         (longlong)
         &___7__TExecutableTaskBase_VFTableMergeTask_TraceServices__XX_Private_Tasks_UE__6B_;
    FTaskBase::Init(this_00,param_1,param_3,param_4,param_5);
    this_00[1]._padding_ = (longlong)(param_2->TableA).Object;
    pTVar3 = (param_2->TableA).SharedReferenceCount.ReferenceController;
    this_00[1]._padding_ = (longlong)pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    this_00[1]._padding_ = (longlong)(param_2->TableB).Object;
    pTVar3 = (param_2->TableB).SharedReferenceCount.ReferenceController;
    this_00[1]._padding_ = (longlong)pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    lVar4 = *(longlong *)&param_2->Callback;
    this_00[1]._padding_ = lVar4;
    this_00[1].TraceId = (atomic<unsigned___int64>)0x0;
    if (lVar4 != 0) {
      puVar5 = *(undefined8 **)&(param_2->Callback).field_0x28;
      puVar9 = (undefined8 *)&(param_2->Callback).field_0x10;
      if (puVar5 != (undefined8 *)0x0) {
        puVar9 = puVar5;
      }
      (**(code **)*puVar9)();
    }
    *(TImportTable<TraceServices::FImportTableRow> **)
     this_00[1].Prerequisites.Prerequisites.AllocatorInstance.InlineData = (param_2->TableC).Object;
    this_00[1].Prerequisites.Prerequisites.AllocatorInstance.SecondaryData =
         (ForElementType<UE::Tasks::Private::FTaskBase_*>)
         (param_2->TableC).SharedReferenceCount.ReferenceController;
    (param_2->TableC).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    (param_2->TableC).Object = (TImportTable<TraceServices::FImportTableRow> *)0x0;
    this_00[1].Prerequisites.Prerequisites.ArrayNum = 0;
    this_00[1].Prerequisites.Prerequisites.ArrayMax = 0;
    *(FScriptContainerElement **)&this_00[1].Prerequisites.Prerequisites.ArrayNum =
         (param_2->Messages).AllocatorInstance.Data;
    (param_2->Messages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)&this_00[1].Prerequisites.Mutex = (param_2->Messages).ArrayNum;
    *(int *)&this_00[1].Prerequisites.field_0x1c = (param_2->Messages).ArrayMax;
    (param_2->Messages).ArrayNum = 0;
    (param_2->Messages).ArrayMax = 0;
    *(undefined8 *)&this_00[1].LowLevelTask = 0;
    *(FScriptContainerElement **)&this_00[1].LowLevelTask =
         (param_2->ColumnsMap).AllocatorInstance.Data;
    (param_2->ColumnsMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)&this_00[1].LowLevelTask.field_0x8 = (param_2->ColumnsMap).ArrayNum;
    *(int *)&this_00[1].LowLevelTask.field_0xc = (param_2->ColumnsMap).ArrayMax;
    (param_2->ColumnsMap).ArrayNum = 0;
    (param_2->ColumnsMap).ArrayMax = 0;
    this_00->_padding_ =
         (longlong)&___7__TExecutableTask_VFTableMergeTask_TraceServices___Private_Tasks_UE__6B_;
  }
  pFVar6 = (this->Pimpl).Reference;
  if (pFVar6 != (FTaskBase *)0x0) {
    (this->Pimpl).Reference = (FTaskBase *)0x0;
    LOCK();
    paVar1 = &pFVar6->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar6->_padding_)(pFVar6,1);
    }
  }
  (this->Pimpl).Reference = this_00;
  FTaskBase::TryLaunch(this_00,0x180);
  return;
}

