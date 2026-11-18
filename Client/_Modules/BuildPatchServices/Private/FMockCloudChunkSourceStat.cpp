// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 11

// OnAcceptedNewRequirements @ 1432dddd0

void __thiscall
BuildPatchServices::FMockCloudChunkSourceStat::OnAcceptedNewRequirements
          (FMockCloudChunkSourceStat *this,
          TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *param_1)

{
  return;
}

// OnActiveRequestCountUpdated @ 1432dde40

void __thiscall
BuildPatchServices::FMockCloudChunkSourceStat::OnActiveRequestCountUpdated
          (FMockCloudChunkSourceStat *this,uint param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  double dVar4;
  
  dVar4 = FStatsCollector::GetSeconds();
  iVar3 = (this->RxActiveRequestCountUpdated).ArrayNum;
  piVar1 = &(this->RxActiveRequestCountUpdated).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->RxActiveRequestCountUpdated).AllocatorInstance,piVar1);
  }
  (this->RxActiveRequestCountUpdated).ArrayNum = iVar3 + 1;
  pFVar2 = (this->RxActiveRequestCountUpdated).AllocatorInstance.Data;
  *(double *)(pFVar2 + (longlong)iVar3 * 0x10) = dVar4;
  *(uint *)(pFVar2 + (longlong)iVar3 * 0x10 + 8) = param_1;
  return;
}

// OnDownloadAborted @ 1432dea40

void __thiscall
BuildPatchServices::FMockCloudChunkSourceStat::OnDownloadAborted
          (FMockCloudChunkSourceStat *this,FGuid *param_1,FString *param_2,double param_3,
          double param_4,double param_5,double param_6)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  
  dVar3 = FStatsCollector::GetSeconds();
  iVar5 = (this->RxDownloadAborted).ArrayNum;
  piVar1 = &(this->RxDownloadAborted).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x848,&(this->RxDownloadAborted).AllocatorInstance,piVar1);
  }
  (this->RxDownloadAborted).ArrayNum = iVar5 + 1;
  pFVar2 = (this->RxDownloadAborted).AllocatorInstance.Data;
  lVar6 = (longlong)iVar5;
  *(double *)(pFVar2 + lVar6 * 0x48) = dVar3;
  uVar4 = *(undefined8 *)&param_1->C;
  *(undefined8 *)(pFVar2 + lVar6 * 0x48 + 8) = *(undefined8 *)param_1;
  *(undefined8 *)(pFVar2 + lVar6 * 0x48 + 8 + 8) = uVar4;
  ::FString::FString((FString *)(pFVar2 + lVar6 * 0x48 + 0x18),param_2);
  *(double *)(pFVar2 + lVar6 * 0x48 + 0x30) = param_4;
  *(double *)(pFVar2 + lVar6 * 0x48 + 0x28) = param_3;
  *(double *)(pFVar2 + lVar6 * 0x48 + 0x40) = param_6;
  *(double *)(pFVar2 + lVar6 * 0x48 + 0x38) = param_5;
  return;
}

// OnDownloadCorrupt @ 1432df000

void __thiscall
BuildPatchServices::FMockCloudChunkSourceStat::OnDownloadCorrupt
          (FMockCloudChunkSourceStat *this,FGuid *param_1,FString *param_2,EChunkLoadResult param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  
  dVar3 = FStatsCollector::GetSeconds();
  iVar5 = (this->RxDownloadCorrupt).ArrayNum;
  piVar1 = &(this->RxDownloadCorrupt).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&(this->RxDownloadCorrupt).AllocatorInstance,piVar1);
  }
  (this->RxDownloadCorrupt).ArrayNum = iVar5 + 1;
  pFVar2 = (this->RxDownloadCorrupt).AllocatorInstance.Data;
  lVar6 = (longlong)iVar5 * 0x30;
  *(double *)(pFVar2 + lVar6) = dVar3;
  uVar4 = *(undefined8 *)&param_1->C;
  *(undefined8 *)(pFVar2 + lVar6 + 8) = *(undefined8 *)param_1;
  *(undefined8 *)(pFVar2 + lVar6 + 8 + 8) = uVar4;
  ::FString::FString((FString *)(pFVar2 + lVar6 + 0x18),param_2);
  pFVar2[lVar6 + 0x28] = (FScriptContainerElement)param_3;
  return;
}

// OnDownloadFailed @ 1432df0c0

void __thiscall
BuildPatchServices::FMockCloudChunkSourceStat::OnDownloadFailed
          (FMockCloudChunkSourceStat *this,FGuid *param_1,FString *param_2)

{
  int *piVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  double dVar4;
  undefined8 uVar5;
  int iVar6;
  
  dVar4 = FStatsCollector::GetSeconds();
  iVar6 = (this->RxDownloadFailed).ArrayNum;
  piVar1 = &(this->RxDownloadFailed).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&(this->RxDownloadFailed).AllocatorInstance,piVar1);
  }
  (this->RxDownloadFailed).ArrayNum = iVar6 + 1;
  pFVar3 = (this->RxDownloadFailed).AllocatorInstance.Data;
  lVar2 = (longlong)iVar6 * 5 + 3;
  *(double *)(pFVar3 + lVar2 * 8 + -0x18) = dVar4;
  uVar5 = *(undefined8 *)&param_1->C;
  *(undefined8 *)(pFVar3 + lVar2 * 8 + -0x10) = *(undefined8 *)param_1;
  *(undefined8 *)(pFVar3 + lVar2 * 8 + -0x10 + 8) = uVar5;
  ::FString::FString((FString *)(pFVar3 + lVar2 * 8),param_2);
  return;
}

// OnDownloadHealthUpdated @ 1432df260

void __thiscall
BuildPatchServices::FMockCloudChunkSourceStat::OnDownloadHealthUpdated
          (FMockCloudChunkSourceStat *this,EBuildPatchDownloadHealth param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  double dVar4;
  
  dVar4 = FStatsCollector::GetSeconds();
  iVar3 = (this->RxDownloadHealthUpdated).ArrayNum;
  piVar1 = &(this->RxDownloadHealthUpdated).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->RxDownloadHealthUpdated).AllocatorInstance,piVar1);
  }
  (this->RxDownloadHealthUpdated).ArrayNum = iVar3 + 1;
  pFVar2 = (this->RxDownloadHealthUpdated).AllocatorInstance.Data;
  *(double *)(pFVar2 + (longlong)iVar3 * 0x10) = dVar4;
  *(EBuildPatchDownloadHealth *)(pFVar2 + (longlong)iVar3 * 0x10 + 8) = param_1;
  return;
}

// OnDownloadRequested @ 1432df3f0

void __thiscall
BuildPatchServices::FMockCloudChunkSourceStat::OnDownloadRequested
          (FMockCloudChunkSourceStat *this,FGuid *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  undefined8 uVar4;
  int iVar5;
  
  dVar3 = FStatsCollector::GetSeconds();
  iVar5 = (this->RxDownloadRequested).ArrayNum;
  piVar1 = &(this->RxDownloadRequested).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(this->RxDownloadRequested).AllocatorInstance,piVar1);
  }
  (this->RxDownloadRequested).ArrayNum = iVar5 + 1;
  pFVar2 = (this->RxDownloadRequested).AllocatorInstance.Data;
  *(double *)(pFVar2 + (longlong)iVar5 * 0x18) = dVar3;
  uVar4 = *(undefined8 *)&param_1->C;
  pFVar2 = pFVar2 + (longlong)iVar5 * 0x18 + 8;
  *(undefined8 *)pFVar2 = *(undefined8 *)param_1;
  *(undefined8 *)(pFVar2 + 8) = uVar4;
  return;
}

// OnDownloadSuccess @ 1432df4f0

void __thiscall
BuildPatchServices::FMockCloudChunkSourceStat::OnDownloadSuccess
          (FMockCloudChunkSourceStat *this,FGuid *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  undefined8 uVar4;
  int iVar5;
  
  dVar3 = FStatsCollector::GetSeconds();
  iVar5 = (this->RxDownloadSuccess).ArrayNum;
  piVar1 = &(this->RxDownloadSuccess).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(this->RxDownloadSuccess).AllocatorInstance,piVar1);
  }
  (this->RxDownloadSuccess).ArrayNum = iVar5 + 1;
  pFVar2 = (this->RxDownloadSuccess).AllocatorInstance.Data;
  *(double *)(pFVar2 + (longlong)iVar5 * 0x18) = dVar3;
  uVar4 = *(undefined8 *)&param_1->C;
  pFVar2 = pFVar2 + (longlong)iVar5 * 0x18 + 8;
  *(undefined8 *)pFVar2 = *(undefined8 *)param_1;
  *(undefined8 *)(pFVar2 + 8) = uVar4;
  return;
}

// OnReceivedDataUpdated @ 1432e1050

void __thiscall
BuildPatchServices::FMockCloudChunkSourceStat::OnReceivedDataUpdated
          (FMockCloudChunkSourceStat *this,long64 param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  double dVar4;
  
  dVar4 = FStatsCollector::GetSeconds();
  iVar3 = (this->RxReceivedDataUpdated).ArrayNum;
  piVar1 = &(this->RxReceivedDataUpdated).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->RxReceivedDataUpdated).AllocatorInstance,piVar1);
  }
  (this->RxReceivedDataUpdated).ArrayNum = iVar3 + 1;
  pFVar2 = (this->RxReceivedDataUpdated).AllocatorInstance.Data;
  *(double *)(pFVar2 + (longlong)iVar3 * 0x10) = dVar4;
  *(long64 *)(pFVar2 + (longlong)iVar3 * 0x10 + 8) = param_1;
  return;
}

// OnRequiredDataUpdated @ 1432e1120

void __thiscall
BuildPatchServices::FMockCloudChunkSourceStat::OnRequiredDataUpdated
          (FMockCloudChunkSourceStat *this,long64 param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  double dVar4;
  
  dVar4 = FStatsCollector::GetSeconds();
  iVar3 = (this->RxRequiredDataUpdated).ArrayNum;
  piVar1 = &(this->RxRequiredDataUpdated).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->RxRequiredDataUpdated).AllocatorInstance,piVar1);
  }
  (this->RxRequiredDataUpdated).ArrayNum = iVar3 + 1;
  pFVar2 = (this->RxRequiredDataUpdated).AllocatorInstance.Data;
  *(double *)(pFVar2 + (longlong)iVar3 * 0x10) = dVar4;
  *(long64 *)(pFVar2 + (longlong)iVar3 * 0x10 + 8) = param_1;
  return;
}

// OnSuccessRateUpdated @ 1432e1260

void __thiscall
BuildPatchServices::FMockCloudChunkSourceStat::OnSuccessRateUpdated
          (FMockCloudChunkSourceStat *this,float param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  double dVar4;
  
  dVar4 = FStatsCollector::GetSeconds();
  iVar3 = (this->RxSuccessRateUpdated).ArrayNum;
  piVar1 = &(this->RxSuccessRateUpdated).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->RxSuccessRateUpdated).AllocatorInstance,piVar1);
  }
  (this->RxSuccessRateUpdated).ArrayNum = iVar3 + 1;
  pFVar2 = (this->RxSuccessRateUpdated).AllocatorInstance.Data;
  *(double *)(pFVar2 + (longlong)iVar3 * 0x10) = dVar4;
  *(float *)(pFVar2 + (longlong)iVar3 * 0x10 + 8) = param_1;
  return;
}

