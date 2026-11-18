// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 3

// OnDownloadComplete @ 143324d60

void __thiscall
BuildPatchServices::FMockDownloadServiceStat::OnDownloadComplete
          (FMockDownloadServiceStat *this,FDownloadRecord *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  ulong64 uVar4;
  int iVar5;
  longlong lVar6;
  
  dVar3 = FStatsCollector::GetSeconds();
  iVar5 = (this->RxDownloadComplete).ArrayNum;
  piVar1 = &(this->RxDownloadComplete).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x840,&(this->RxDownloadComplete).AllocatorInstance,piVar1);
  }
  (this->RxDownloadComplete).ArrayNum = iVar5 + 1;
  pFVar2 = (this->RxDownloadComplete).AllocatorInstance.Data;
  lVar6 = (longlong)iVar5 * 0x40;
  *(double *)(pFVar2 + lVar6) = dVar3;
  *(int *)(pFVar2 + lVar6 + 8) = param_1->RequestId;
  ::FString::FString((FString *)(pFVar2 + lVar6 + 0x10),&param_1->Uri);
  pFVar2[lVar6 + 0x20] = (FScriptContainerElement)param_1->bSuccess;
  *(int *)(pFVar2 + lVar6 + 0x24) = param_1->ResponseCode;
  uVar4 = (param_1->SpeedRecord).CyclesEnd;
  *(ulong64 *)(pFVar2 + lVar6 + 0x28) = (param_1->SpeedRecord).CyclesStart;
  *(ulong64 *)(pFVar2 + lVar6 + 0x28 + 8) = uVar4;
  *(ulong64 *)(pFVar2 + lVar6 + 0x38) = (param_1->SpeedRecord).Size;
  return;
}

// OnDownloadProgress @ 143324e10

void __thiscall
BuildPatchServices::FMockDownloadServiceStat::OnDownloadProgress
          (FMockDownloadServiceStat *this,int param_1,ulong64 param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong lVar4;
  double dVar5;
  
  dVar5 = FStatsCollector::GetSeconds();
  iVar3 = (this->RxDownloadProgress).ArrayNum;
  piVar1 = &(this->RxDownloadProgress).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->RxDownloadProgress).AllocatorInstance,piVar1);
  }
  (this->RxDownloadProgress).ArrayNum = iVar3 + 1;
  lVar4 = (longlong)iVar3;
  pFVar2 = (this->RxDownloadProgress).AllocatorInstance.Data;
  *(double *)(pFVar2 + lVar4 * 0x10) = dVar5;
  *(int *)(pFVar2 + lVar4 * 0x10 + 8) = param_1;
  *(int *)(pFVar2 + lVar4 * 0x10 + 0xc) = (int)param_2;
  return;
}

// OnDownloadStarted @ 143324e90

void __thiscall
BuildPatchServices::FMockDownloadServiceStat::OnDownloadStarted
          (FMockDownloadServiceStat *this,int param_1,FString *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong lVar4;
  double dVar5;
  
  dVar5 = FStatsCollector::GetSeconds();
  iVar3 = (this->RxDownloadStarted).ArrayNum;
  piVar1 = &(this->RxDownloadStarted).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->RxDownloadStarted).AllocatorInstance,piVar1);
  }
  (this->RxDownloadStarted).ArrayNum = iVar3 + 1;
  pFVar2 = (this->RxDownloadStarted).AllocatorInstance.Data;
  lVar4 = (longlong)iVar3 * 0x20;
  *(double *)(pFVar2 + lVar4) = dVar5;
  *(int *)(pFVar2 + lVar4 + 8) = param_1;
  ::FString::FString((FString *)(pFVar2 + lVar4 + 0x10),param_2);
  return;
}

