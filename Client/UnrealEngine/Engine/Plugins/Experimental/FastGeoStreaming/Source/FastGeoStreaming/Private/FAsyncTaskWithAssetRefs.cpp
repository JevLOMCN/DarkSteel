// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FastGeoStreaming
// Functions: 2

// ~FAsyncTaskWithAssetRefs @ 14da1b020

void __thiscall
FastGeo::FAsyncTaskWithAssetRefs::~FAsyncTaskWithAssetRefs(FAsyncTaskWithAssetRefs *this)

{
  atomic<unsigned_int> *paVar1;
  int *piVar2;
  atomic<unsigned_int> aVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  longlong *plVar6;
  code *pcVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  FTaskBase *this_00;
  FTask *pFVar11;
  undefined8 uVar12;
  
  lVar8 = *(longlong *)&this->TaskId;
  lVar9 = *(longlong *)&(this->TaskId).C;
  this_00 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&UE::Tasks::Private::SmallTaskAllocator);
  if (this_00 == (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x100);
  }
  else {
    UE::Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
    this_00->_padding_ =
         (longlong)
         &
         ___7__TExecutableTaskBase_V<lambda_1>__1___1FAsyncTaskWithAssetRefs_FastGeo__QEAA_XZ_XX_Private_Tasks_UE__6B_
    ;
    if ((*(ulonglong *)&(this_00->LowLevelTask).field_0x38 & 0x20) == 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsCompleted()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                          ,0x1dd,L"State: %d");
      if (bVar10) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    (**(code **)(*(longlong *)&(this_00->LowLevelTask).field_0x28 + 0x18))
              (&(this_00->LowLevelTask).field_0x28,&this_00->LowLevelTask);
    *(FTaskBase **)&this_00->LowLevelTask = this_00;
    *(undefined ***)&(this_00->LowLevelTask).field_0x28 =
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(FTaskBase **)&(this_00->LowLevelTask).field_0x8 = this_00;
    pFVar11 = LowLevelTasks::FTask::GetActiveTask();
    if (pFVar11 == (FTask *)0x0) {
      uVar12 = 0;
    }
    else {
      uVar12 = *(undefined8 *)&pFVar11->field_0x30;
    }
    *(undefined8 *)&(this_00->LowLevelTask).field_0x30 = uVar12;
    *(undefined8 *)&(this_00->LowLevelTask).field_0x38 = 0xc8000054b1592c00;
    this_00->ExtendedPriority = GameThreadNormalPri;
    UE::FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&this_00->_padding_)
    ;
    this_00[1]._padding_ = lVar8;
    this_00[1]._padding_ = lVar9;
    this_00->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__1___1FAsyncTaskWithAssetRefs_FastGeo__QEAA_XZ__Private_Tasks_UE__6B_
    ;
    UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0x100);
    LOCK();
    paVar1 = &this_00->RefCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<unsigned_int>)0x1) {
      (**(code **)this_00->_padding_)(this_00,1);
    }
  }
  pFVar5 = (this->Assets).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  plVar6 = (longlong *)this->_padding_;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014da1b1c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 8))(plVar6,1);
      return;
    }
  }
  return;
}

// operator() @ 14da1d220

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
`FastGeo::FAsyncTaskWithAssetRefs::Launch<`UFastGeoContainer::PrecachePSOs'::__l8::<lambda_2>_>'::
__l2::<lambda_1>::operator()(void *this)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  bool bVar4;
  undefined1 local_res8 [8];
  
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId710,"UFastGeoContainer::PrecachePSOs_Task",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
               ,0x2c6);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId710);
  }
  puVar3 = *(undefined8 **)((longlong)this + 0x18);
  iVar2 = *(int *)((longlong)this + 0x20);
  puVar1 = puVar3 + iVar2;
  while( true ) {
    if (*(int *)((longlong)this + 0x20) != iVar2) {
      `TCheckedPointerIterator<FFastGeoPrimitiveComponent_*_const,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (puVar3 == puVar1) break;
    FFastGeoPrimitiveComponent::PrecachePSOs((FFastGeoPrimitiveComponent *)*puVar3);
    puVar3 = puVar3 + 1;
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

