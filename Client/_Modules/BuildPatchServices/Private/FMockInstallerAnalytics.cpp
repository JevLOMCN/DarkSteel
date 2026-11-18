// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 7

// Flush @ 14331f090

void __thiscall BuildPatchServices::FMockInstallerAnalytics::Flush(FMockInstallerAnalytics *this)

{
  this->RxFlush = this->RxFlush + 1;
  return;
}

// RecordChunkCacheError @ 143325c20

void __thiscall
BuildPatchServices::FMockInstallerAnalytics::RecordChunkCacheError
          (FMockInstallerAnalytics *this,FGuid *param_1,FString *param_2,int param_3,
          FString *param_4,FString *param_5)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  
  dVar3 = FStatsCollector::GetSeconds();
  iVar5 = (this->RxRecordChunkCacheError).ArrayNum;
  piVar1 = &(this->RxRecordChunkCacheError).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x850,&(this->RxRecordChunkCacheError).AllocatorInstance,piVar1);
  }
  (this->RxRecordChunkCacheError).ArrayNum = iVar5 + 1;
  pFVar2 = (this->RxRecordChunkCacheError).AllocatorInstance.Data;
  lVar6 = (longlong)iVar5 * 0x50;
  *(double *)(pFVar2 + lVar6) = dVar3;
  uVar4 = *(undefined8 *)&param_1->C;
  *(undefined8 *)(pFVar2 + lVar6 + 8) = *(undefined8 *)param_1;
  *(undefined8 *)(pFVar2 + lVar6 + 8 + 8) = uVar4;
  ::FString::FString((FString *)(pFVar2 + lVar6 + 0x18),param_2);
  *(int *)(pFVar2 + lVar6 + 0x28) = param_3;
  ::FString::FString((FString *)(pFVar2 + lVar6 + 0x30),param_4);
  ::FString::FString((FString *)(pFVar2 + lVar6 + 0x40),param_5);
  return;
}

// RecordChunkDownloadAborted @ 143325cf0

void __thiscall
BuildPatchServices::FMockInstallerAnalytics::RecordChunkDownloadAborted
          (FMockInstallerAnalytics *this,FString *param_1,double param_2,double param_3,
          double param_4,double param_5)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong lVar4;
  double dVar5;
  
  dVar5 = FStatsCollector::GetSeconds();
  iVar3 = (this->RxRecordChunkDownloadAborted).ArrayNum;
  piVar1 = &(this->RxRecordChunkDownloadAborted).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,&(this->RxRecordChunkDownloadAborted).AllocatorInstance,piVar1);
  }
  (this->RxRecordChunkDownloadAborted).ArrayNum = iVar3 + 1;
  pFVar2 = (this->RxRecordChunkDownloadAborted).AllocatorInstance.Data;
  lVar4 = (longlong)iVar3 * 0x38;
  *(double *)(pFVar2 + lVar4) = dVar5;
  ::FString::FString((FString *)(pFVar2 + lVar4 + 8),param_1);
  *(double *)(pFVar2 + lVar4 + 0x18) = param_2;
  *(double *)(pFVar2 + lVar4 + 0x20) = param_3;
  *(double *)(pFVar2 + lVar4 + 0x28) = param_4;
  *(double *)(pFVar2 + lVar4 + 0x30) = param_5;
  return;
}

// RecordChunkDownloadError @ 143325dc0

void __thiscall
BuildPatchServices::FMockInstallerAnalytics::RecordChunkDownloadError
          (FMockInstallerAnalytics *this,FString *param_1,int param_2,FString *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong lVar4;
  double dVar5;
  
  dVar5 = FStatsCollector::GetSeconds();
  iVar3 = (this->RxRecordChunkDownloadError).ArrayNum;
  piVar1 = &(this->RxRecordChunkDownloadError).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&(this->RxRecordChunkDownloadError).AllocatorInstance,piVar1);
  }
  (this->RxRecordChunkDownloadError).ArrayNum = iVar3 + 1;
  pFVar2 = (this->RxRecordChunkDownloadError).AllocatorInstance.Data;
  lVar4 = (longlong)iVar3 * 0x30;
  *(double *)(pFVar2 + lVar4) = dVar5;
  ::FString::FString((FString *)(pFVar2 + lVar4 + 8),param_1);
  *(int *)(pFVar2 + lVar4 + 0x18) = param_2;
  ::FString::FString((FString *)(pFVar2 + lVar4 + 0x20),param_3);
  return;
}

// RecordConstructionError @ 143325e70

void __thiscall
BuildPatchServices::FMockInstallerAnalytics::RecordConstructionError
          (FMockInstallerAnalytics *this,FString *param_1,int param_2,FString *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong lVar4;
  double dVar5;
  
  dVar5 = FStatsCollector::GetSeconds();
  iVar3 = (this->RxRecordConstructionError).ArrayNum;
  piVar1 = &(this->RxRecordConstructionError).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&(this->RxRecordConstructionError).AllocatorInstance,piVar1);
  }
  (this->RxRecordConstructionError).ArrayNum = iVar3 + 1;
  pFVar2 = (this->RxRecordConstructionError).AllocatorInstance.Data;
  lVar4 = (longlong)iVar3 * 0x30;
  *(double *)(pFVar2 + lVar4) = dVar5;
  ::FString::FString((FString *)(pFVar2 + lVar4 + 8),param_1);
  *(int *)(pFVar2 + lVar4 + 0x18) = param_2;
  ::FString::FString((FString *)(pFVar2 + lVar4 + 0x20),param_3);
  return;
}

// RecordPrereqInstallationError @ 143325f20

void __thiscall
BuildPatchServices::FMockInstallerAnalytics::RecordPrereqInstallationError
          (FMockInstallerAnalytics *this,FString *param_1,FString *param_2,FString *param_3,
          FString *param_4,int param_5,FString *param_6)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong lVar4;
  double dVar5;
  
  dVar5 = FStatsCollector::GetSeconds();
  iVar3 = (this->RxRecordPrereqInstallationError).ArrayNum;
  piVar1 = &(this->RxRecordPrereqInstallationError).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x860,&(this->RxRecordPrereqInstallationError).AllocatorInstance,piVar1);
  }
  (this->RxRecordPrereqInstallationError).ArrayNum = iVar3 + 1;
  pFVar2 = (this->RxRecordPrereqInstallationError).AllocatorInstance.Data;
  lVar4 = (longlong)iVar3 * 0x60;
  *(double *)(pFVar2 + lVar4) = dVar5;
  ::FString::FString((FString *)(pFVar2 + lVar4 + 8),param_1);
  ::FString::FString((FString *)(pFVar2 + lVar4 + 0x18),param_2);
  ::FString::FString((FString *)(pFVar2 + lVar4 + 0x28),param_3);
  ::FString::FString((FString *)(pFVar2 + lVar4 + 0x38),param_4);
  *(int *)(pFVar2 + lVar4 + 0x48) = param_5;
  ::FString::FString((FString *)(pFVar2 + lVar4 + 0x50),param_6);
  return;
}

// TrackRequest @ 143328ed0

void __thiscall
BuildPatchServices::FMockInstallerAnalytics::TrackRequest
          (FMockInstallerAnalytics *this,TSharedPtr<IHttpRequest,1> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  int iVar4;
  longlong lVar5;
  double dVar6;
  
  dVar6 = FStatsCollector::GetSeconds();
  iVar4 = (this->RxTrackRequest).ArrayNum;
  piVar1 = &(this->RxTrackRequest).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(this->RxTrackRequest).AllocatorInstance,piVar1);
  }
  lVar5 = (longlong)iVar4;
  (this->RxTrackRequest).ArrayNum = iVar4 + 1;
  pFVar2 = (this->RxTrackRequest).AllocatorInstance.Data;
  *(IHttpRequest **)(pFVar2 + lVar5 * 0x18 + 8) = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  *(double *)(pFVar2 + lVar5 * 0x18) = dVar6;
  *(TReferenceControllerBase<1> **)(pFVar2 + lVar5 * 0x18 + 0x10) = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  return;
}

