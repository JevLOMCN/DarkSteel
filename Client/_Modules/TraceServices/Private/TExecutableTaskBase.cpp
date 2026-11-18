// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 4

// TExecutableTaskBase<TraceServices::FTableImportTask,void,void> @ 14d41f280

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TExecutableTaskBase<TraceServices::FTableImportTask,void,void> * __thiscall
UE::Tasks::Private::TExecutableTaskBase<TraceServices::FTableImportTask,void,void>::
TExecutableTaskBase<TraceServices::FTableImportTask,void,void>
          (TExecutableTaskBase<TraceServices::FTableImportTask,void,void> *this,wchar_t *param_1,
          FTableImportTask *param_2,ETaskPriority param_3,EExtendedTaskPriority param_4,
          ETaskFlags param_5)

{
  uchar *puVar1;
  uchar *puVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSharedRef<FTokenizedMessage,1> *pTVar7;
  FScriptContainerElement *pFVar8;
  undefined8 *puVar9;
  
  FTaskBase::FTaskBase((FTaskBase *)this,2,true);
  this->_padding_ =
       (longlong)
       &___7__TExecutableTaskBase_VFTableImportTask_TraceServices__XX_Private_Tasks_UE__6B_;
  FTaskBase::Init((FTaskBase *)this,param_1,param_3,param_4,param_5);
  lVar4 = *(longlong *)&param_2->Callback;
  *(longlong *)(this->TaskBodyStorage).Pad = lVar4;
  (this->TaskBodyStorage).Pad[0x28] = '\0';
  (this->TaskBodyStorage).Pad[0x29] = '\0';
  (this->TaskBodyStorage).Pad[0x2a] = '\0';
  (this->TaskBodyStorage).Pad[0x2b] = '\0';
  (this->TaskBodyStorage).Pad[0x2c] = '\0';
  (this->TaskBodyStorage).Pad[0x2d] = '\0';
  (this->TaskBodyStorage).Pad[0x2e] = '\0';
  (this->TaskBodyStorage).Pad[0x2f] = '\0';
  if (lVar4 != 0) {
    puVar5 = *(undefined8 **)&(param_2->Callback).field_0x28;
    puVar9 = (undefined8 *)&(param_2->Callback).field_0x10;
    if (puVar5 != (undefined8 *)0x0) {
      puVar9 = puVar5;
    }
    (**(code **)*puVar9)();
  }
  *(TImportTable<TraceServices::FImportTableRow> **)((this->TaskBodyStorage).Pad + 0x30) =
       (param_2->Table).Object;
  pTVar6 = (param_2->Table).SharedReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)((this->TaskBodyStorage).Pad + 0x38) = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  puVar2 = (this->TaskBodyStorage).Pad + 0x40;
  *(FScriptContainerElement **)puVar2 = (FScriptContainerElement *)0x0;
  puVar1 = (this->TaskBodyStorage).Pad + 0x4c;
  iVar3 = (param_2->Messages).ArrayNum;
  pTVar7 = (TSharedRef<FTokenizedMessage,1> *)(param_2->Messages).AllocatorInstance.Data;
  *(int *)((this->TaskBodyStorage).Pad + 0x48) = iVar3;
  if (iVar3 == 0) {
    puVar1[0] = '\0';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,(ForAnyElementType *)puVar2,iVar3,(int *)puVar1);
    ConstructItems<TSharedRef<FTokenizedMessage,1>,TSharedRef<FTokenizedMessage,1>,int>
              (*(FScriptContainerElement **)puVar2,pTVar7,iVar3);
  }
  puVar2 = (this->TaskBodyStorage).Pad + 0x50;
  *(FScriptContainerElement **)puVar2 = (FScriptContainerElement *)0x0;
  puVar1 = (this->TaskBodyStorage).Pad + 0x5c;
  iVar3 = (param_2->ColumnNames).ArrayNum;
  pFVar8 = (param_2->ColumnNames).AllocatorInstance.Data;
  *(int *)((this->TaskBodyStorage).Pad + 0x58) = iVar3;
  if (iVar3 == 0) {
    puVar1[0] = '\0';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,(ForAnyElementType *)puVar2,iVar3,(int *)puVar1);
    ConstructItems<FString,FString,int>(*(FScriptContainerElement **)puVar2,(FString *)pFVar8,iVar3)
    ;
  }
  ::FString::FString((FString *)((this->TaskBodyStorage).Pad + 0x60),&param_2->FilePath);
  *(FName *)((this->TaskBodyStorage).Pad + 0x70) = param_2->TableId;
  ::FString::FString((FString *)((this->TaskBodyStorage).Pad + 0x78),&param_2->Separator);
  return this;
}

// ExecuteTask @ 14d45e0d0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`TraceServices::FTimelineStatistics::CreateFrameStatsAggregation<TraceServices::ITimeline<TraceServices::FTimingProfilerEvent>,`TraceServices::FTimingProfilerProvider::CreateAggregationInternal'::__l2::<lambda_1>,TraceServices::FTimingProfilerTimer_const_*>'::__l15::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `TraceServices::FTimelineStatistics::
  CreateFrameStatsAggregation<TraceServices::ITimeline<TraceServices::FTimingProfilerEvent>,`TraceServices::FTimingProfilerProvider::CreateAggregationInternal'::__l2::<lambda_1>,TraceServices::FTimingProfilerTimer_const_*>'
  ::__l15::<lambda_1>::operator()((void *)((longlong)this + 0xd8));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x120));
  return;
}

// ExecuteTask @ 14d45e100

void __thiscall
UE::Tasks::Private::TExecutableTaskBase<TraceServices::FTableImportTask,void,void>::ExecuteTask
          (TExecutableTaskBase<TraceServices::FTableImportTask,void,void> *this)

{
  TraceServices::FTableImportTask::operator()((FTableImportTask *)&this->TaskBodyStorage);
  TraceServices::FTableImportTask::~FTableImportTask((FTableImportTask *)&this->TaskBodyStorage);
  return;
}

// ExecuteTask @ 14d45e130

void __thiscall
UE::Tasks::Private::TExecutableTaskBase<TraceServices::FTableMergeTask,void,void>::ExecuteTask
          (TExecutableTaskBase<TraceServices::FTableMergeTask,void,void> *this)

{
  TraceServices::FTableMergeTask::operator()((FTableMergeTask *)&this->TaskBodyStorage);
  TraceServices::FTableMergeTask::~FTableMergeTask((FTableMergeTask *)&this->TaskBodyStorage);
  return;
}

