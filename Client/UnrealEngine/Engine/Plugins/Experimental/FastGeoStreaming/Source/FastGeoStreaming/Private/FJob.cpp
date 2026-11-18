// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FastGeoStreaming
// Functions: 2

// Execute @ 14da27bd0

void __thiscall FFastGeoAsyncRenderStateJobQueue::FJob::Execute(FJob *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UFastGeoContainer *pUVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  bool bVar9;
  undefined1 local_res8 [8];
  longlong *local_38;
  void *local_30;
  undefined8 local_28;
  
  if ((this->FastGeo != (UFastGeoContainer *)0x0) &&
     (((uint)this->FastGeo->_padding_ >> 0x1e & 1) != 0)) {
    return;
  }
  if (this->Type == CreateRenderState) {
    if (CpuChannel->Enabled < 0) {
      UFastGeoContainer::OnCreateRenderState_Concurrent(this->FastGeo);
      return;
    }
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId183,"FFastGeoAsyncRenderStateJobQueue::CreateRenderState",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoAsyncRenderStateJobQueue.cpp"
               ,0xb7);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId183);
    UFastGeoContainer::OnCreateRenderState_Concurrent(this->FastGeo);
  }
  else {
    if (this->Type != DestroyRenderState) {
      return;
    }
    bVar8 = CpuChannel->Enabled < 0;
    if (!bVar8) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId189,"FFastGeoAsyncRenderStateJobQueue::DestroyRenderState"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoAsyncRenderStateJobQueue.cpp"
                 ,0xbd);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId189);
    }
    pUVar3 = this->FastGeo;
    bVar9 = -1 < CpuChannel->Enabled;
    if (bVar9) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId467,"UFastGeoContainer::OnDestroyRenderState_Concurrent",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                 ,0x1d3);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId467);
    }
    if (((pUVar3->PendingDestroy).RenderState.NumToProcess !=
         (pUVar3->PendingDestroy).RenderState.ComponentsToProcess.ArrayNum) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PendingDestroy.RenderState.NumToProcess == PendingDestroy.RenderState.ComponentsToProcess.Num()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                           ,0x1d6,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar6 = (**(code **)(pUVar3->_padding_ + 0x180))(pUVar3);
    pFVar7 = (pUVar3->PendingDestroy).RenderState.ComponentsToProcess.AllocatorInstance.Data;
    iVar2 = (pUVar3->PendingDestroy).RenderState.ComponentsToProcess.ArrayNum;
    local_38 = *(longlong **)(lVar6 + 600);
    local_30 = (void *)0x0;
    local_28 = 0;
    pFVar1 = pFVar7 + (longlong)iVar2 * 8;
    while( true ) {
      if ((pUVar3->PendingDestroy).RenderState.ComponentsToProcess.ArrayNum != iVar2) {
        `TCheckedPointerIterator<FFastGeoPrimitiveComponent_*,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res8);
      }
      if (pFVar7 == pFVar1) break;
      (**(code **)(**(longlong **)pFVar7 + 0x50))(*(longlong **)pFVar7,&local_38);
      pFVar7 = pFVar7 + 8;
    }
    (pUVar3->PendingDestroy).RenderState.NumProcessed =
         (pUVar3->PendingDestroy).RenderState.NumToProcess;
    if ((int)local_28 != 0) {
      (**(code **)(*local_38 + 0x40))(local_38,&local_30);
    }
    if (local_30 != (void *)0x0) {
      FMemory::Free(local_30);
    }
    if (bVar9) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar8) {
      return;
    }
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// OnPostExecute_GameThread @ 14da310c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FFastGeoAsyncRenderStateJobQueue::FJob::OnPostExecute_GameThread(FJob *this)

{
  int *piVar1;
  int iVar2;
  UFastGeoContainer *pUVar3;
  code *pcVar4;
  bool bVar5;
  UWorld *pUVar6;
  UFastGeoWorldSubsystem *pUVar7;
  
  if ((this->FastGeo == (UFastGeoContainer *)0x0) ||
     (((uint)this->FastGeo->_padding_ >> 0x1e & 1) == 0)) {
    if (this->Type == CreateRenderState) {
      pUVar3 = this->FastGeo;
      if (((pUVar3->PendingCreate).RenderState.NumToProcess == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("PendingCreate.RenderState.NumToProcess != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                             ,0x1e5,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (((pUVar3->PendingCreate).RenderState.TotalNumProcessed ==
           (pUVar3->PendingCreate).RenderState.ComponentsToProcess.ArrayNum) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("PendingCreate.RenderState.TotalNumProcessed != PendingCreate.RenderState.ComponentsToProcess.Num()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                             ,0x1e6,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      piVar1 = &(pUVar3->PendingCreate).RenderState.TotalNumProcessed;
      *piVar1 = *piVar1 + (pUVar3->PendingCreate).RenderState.NumProcessed;
      iVar2 = (pUVar3->PendingCreate).RenderState.TotalNumProcessed;
      (pUVar3->PendingCreate).RenderState.NumToProcess = 0;
      (pUVar3->PendingCreate).RenderState.NumProcessed = 0;
      (pUVar3->PendingCreate).bIsInBlockingWait = false;
      if (iVar2 < (pUVar3->PendingCreate).RenderState.ComponentsToProcess.ArrayNum) {
        pUVar6 = (UWorld *)(**(code **)(pUVar3->_padding_ + 0x180))(pUVar3);
        pUVar7 = UWorld::GetSubsystem<UFastGeoWorldSubsystem>(pUVar6);
        UFastGeoWorldSubsystem::PushAsyncCreateRenderStateJob(pUVar7,pUVar3);
        return;
      }
    }
    else if (this->Type == DestroyRenderState) {
      pUVar3 = this->FastGeo;
      if (((pUVar3->PendingDestroy).RenderState.NumToProcess == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("PendingDestroy.RenderState.NumToProcess != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                             ,0x1f6,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (((pUVar3->PendingDestroy).RenderState.TotalNumProcessed ==
           (pUVar3->PendingDestroy).RenderState.ComponentsToProcess.ArrayNum) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("PendingDestroy.RenderState.TotalNumProcessed != PendingDestroy.RenderState.ComponentsToProcess.Num()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                             ,0x1f7,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      piVar1 = &(pUVar3->PendingDestroy).RenderState.TotalNumProcessed;
      *piVar1 = *piVar1 + (pUVar3->PendingDestroy).RenderState.NumProcessed;
      iVar2 = (pUVar3->PendingDestroy).RenderState.TotalNumProcessed;
      (pUVar3->PendingDestroy).RenderState.NumToProcess = 0;
      (pUVar3->PendingDestroy).RenderState.NumProcessed = 0;
      (pUVar3->PendingDestroy).bIsInBlockingWait = false;
      if (iVar2 < (pUVar3->PendingDestroy).RenderState.ComponentsToProcess.ArrayNum) {
        pUVar6 = (UWorld *)(**(code **)(pUVar3->_padding_ + 0x180))(pUVar3);
        pUVar7 = UWorld::GetSubsystem<UFastGeoWorldSubsystem>(pUVar6);
        UFastGeoWorldSubsystem::PushAsyncDestroyRenderStateJob(pUVar7,pUVar3);
        return;
      }
    }
  }
  return;
}

