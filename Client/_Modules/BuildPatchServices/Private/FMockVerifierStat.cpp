// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 6

// OnFileCompleted @ 143324f10

void __thiscall
BuildPatchServices::FMockVerifierStat::OnFileCompleted
          (FMockVerifierStat *this,FString *param_1,EVerifyResult param_2)

{
  int *piVar1;
  code *pcVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  double dVar9;
  EVerifyResult local_res18 [2];
  
  if (*(void **)&this->OnFileCompletedFunc != (void *)0x0) {
    local_res18[0] = param_2;
    UE::Core::Private::Function::CheckCallable(*(void **)&this->OnFileCompletedFunc);
    pcVar2 = *(code **)&this->OnFileCompletedFunc;
    plVar3 = *(longlong **)&(this->OnFileCompletedFunc).field_0x28;
    plVar7 = (longlong *)&(this->OnFileCompletedFunc).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar7 = plVar3;
    }
    uVar6 = (**(code **)(*plVar7 + 8))();
    (*pcVar2)(uVar6,param_1,local_res18);
  }
  dVar9 = FStatsCollector::GetSeconds();
  iVar5 = (this->RxOnFileCompleted).ArrayNum;
  piVar1 = &(this->RxOnFileCompleted).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->RxOnFileCompleted).AllocatorInstance,piVar1);
  }
  (this->RxOnFileCompleted).ArrayNum = iVar5 + 1;
  pFVar4 = (this->RxOnFileCompleted).AllocatorInstance.Data;
  lVar8 = (longlong)iVar5 * 0x20;
  *(double *)(pFVar4 + lVar8) = dVar9;
  ::FString::FString((FString *)(pFVar4 + lVar8 + 8),param_1);
  *(EVerifyResult *)(pFVar4 + lVar8 + 0x18) = param_2;
  return;
}

// OnFileProgress @ 143324ff0

void __thiscall
BuildPatchServices::FMockVerifierStat::OnFileProgress
          (FMockVerifierStat *this,FString *param_1,long64 param_2)

{
  int *piVar1;
  code *pcVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  double dVar9;
  long64 local_res8;
  
  if (*(void **)&this->OnFileProgressFunc != (void *)0x0) {
    local_res8 = param_2;
    UE::Core::Private::Function::CheckCallable(*(void **)&this->OnFileProgressFunc);
    pcVar2 = *(code **)&this->OnFileProgressFunc;
    plVar3 = *(longlong **)&(this->OnFileProgressFunc).field_0x28;
    plVar7 = (longlong *)&(this->OnFileProgressFunc).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar7 = plVar3;
    }
    uVar6 = (**(code **)(*plVar7 + 8))();
    (*pcVar2)(uVar6,param_1,&local_res8);
  }
  dVar9 = FStatsCollector::GetSeconds();
  iVar5 = (this->RxOnFileProgress).ArrayNum;
  piVar1 = &(this->RxOnFileProgress).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->RxOnFileProgress).AllocatorInstance,piVar1);
  }
  (this->RxOnFileProgress).ArrayNum = iVar5 + 1;
  pFVar4 = (this->RxOnFileProgress).AllocatorInstance.Data;
  lVar8 = (longlong)iVar5 * 0x20;
  *(double *)(pFVar4 + lVar8) = dVar9;
  ::FString::FString((FString *)(pFVar4 + lVar8 + 8),param_1);
  *(long64 *)(pFVar4 + lVar8 + 0x18) = param_2;
  return;
}

// OnFileRead @ 1433250c0

void __thiscall
BuildPatchServices::FMockVerifierStat::OnFileRead(FMockVerifierStat *this,FRecord *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  ulong64 uVar4;
  int iVar5;
  longlong lVar6;
  
  dVar3 = FStatsCollector::GetSeconds();
  iVar5 = (this->RxOnFileRead).ArrayNum;
  piVar1 = &(this->RxOnFileRead).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->RxOnFileRead).AllocatorInstance,piVar1);
  }
  (this->RxOnFileRead).ArrayNum = iVar5 + 1;
  pFVar2 = (this->RxOnFileRead).AllocatorInstance.Data;
  lVar6 = (longlong)iVar5 * 0x20;
  *(double *)(pFVar2 + lVar6) = dVar3;
  uVar4 = param_1->CyclesEnd;
  *(ulong64 *)(pFVar2 + lVar6 + 8) = param_1->CyclesStart;
  *(ulong64 *)(pFVar2 + lVar6 + 8 + 8) = uVar4;
  *(ulong64 *)(pFVar2 + lVar6 + 0x18) = param_1->Size;
  return;
}

// OnFileStarted @ 143325140

void __thiscall
BuildPatchServices::FMockVerifierStat::OnFileStarted
          (FMockVerifierStat *this,FString *param_1,long64 param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong lVar4;
  double dVar5;
  
  dVar5 = FStatsCollector::GetSeconds();
  iVar3 = (this->RxOnFileStarted).ArrayNum;
  piVar1 = &(this->RxOnFileStarted).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->RxOnFileStarted).AllocatorInstance,piVar1);
  }
  (this->RxOnFileStarted).ArrayNum = iVar3 + 1;
  pFVar2 = (this->RxOnFileStarted).AllocatorInstance.Data;
  lVar4 = (longlong)iVar3 * 0x20;
  *(double *)(pFVar2 + lVar4) = dVar5;
  ::FString::FString((FString *)(pFVar2 + lVar4 + 8),param_1);
  *(long64 *)(pFVar2 + lVar4 + 0x18) = param_2;
  return;
}

// OnProcessedDataUpdated @ 1433255c0

void __thiscall
BuildPatchServices::FMockVerifierStat::OnProcessedDataUpdated
          (FMockVerifierStat *this,long64 param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  double dVar4;
  
  dVar4 = FStatsCollector::GetSeconds();
  iVar3 = (this->RxOnProcessedDataUpdated).ArrayNum;
  piVar1 = &(this->RxOnProcessedDataUpdated).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->RxOnProcessedDataUpdated).AllocatorInstance,piVar1);
  }
  (this->RxOnProcessedDataUpdated).ArrayNum = iVar3 + 1;
  pFVar2 = (this->RxOnProcessedDataUpdated).AllocatorInstance.Data;
  *(double *)(pFVar2 + (longlong)iVar3 * 0x10) = dVar4;
  *(long64 *)(pFVar2 + (longlong)iVar3 * 0x10 + 8) = param_1;
  return;
}

// OnTotalRequiredUpdated @ 143325780

void __thiscall
BuildPatchServices::FMockVerifierStat::OnTotalRequiredUpdated
          (FMockVerifierStat *this,long64 param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  double dVar4;
  
  dVar4 = FStatsCollector::GetSeconds();
  iVar3 = (this->RxOnTotalRequiredUpdated).ArrayNum;
  piVar1 = &(this->RxOnTotalRequiredUpdated).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->RxOnTotalRequiredUpdated).AllocatorInstance,piVar1);
  }
  (this->RxOnTotalRequiredUpdated).ArrayNum = iVar3 + 1;
  pFVar2 = (this->RxOnTotalRequiredUpdated).AllocatorInstance.Data;
  *(double *)(pFVar2 + (longlong)iVar3 * 0x10) = dVar4;
  *(long64 *)(pFVar2 + (longlong)iVar3 * 0x10 + 8) = param_1;
  return;
}

