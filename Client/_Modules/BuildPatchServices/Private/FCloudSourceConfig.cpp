// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 2

// FCloudSourceConfig @ 143221290

FCloudSourceConfig * __thiscall
BuildPatchServices::FCloudSourceConfig::FCloudSourceConfig
          (FCloudSourceConfig *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  longlong lVar7;
  
  piVar1 = &(this->CloudRoots).ArrayMax;
  (this->CloudRoots).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar6 = param_1->ArrayNum;
  pFVar5 = (param_1->AllocatorInstance).Data;
  (this->CloudRoots).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar6,0,(ForAnyElementType *)this,iVar6,piVar1);
    ConstructItems<FString,FString,int>
              ((this->CloudRoots).AllocatorInstance.Data,(FString *)pFVar5,iVar6);
  }
  piVar1 = &(this->RetryDelayTimes).ArrayMax;
  *piVar1 = 0;
  piVar2 = &(this->HealthPercentages).ArrayNum;
  *piVar2 = 0;
  piVar3 = &(this->HealthPercentages).ArrayMax;
  *piVar3 = 0;
  piVar4 = &(this->RetryDelayTimes).ArrayNum;
  this->MaxRetryCount = 6;
  this->PreFetchMinimum = 0x10;
  this->PreFetchMaximum = 0x20;
  (this->RetryDelayTimes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HealthPercentages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->DisconnectedDelay = 5.0;
  this->bBeginDownloadsOnFirstGet = true;
  this->TcpZeroWindowMinimumSeconds = 20.0;
  this->SharedContext = (IBuildInstallerSharedContext *)0x0;
  this->bRunOwnThread = true;
  *piVar4 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,10,&(this->RetryDelayTimes).AllocatorInstance,0,piVar1);
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,10,&(this->RetryDelayTimes).AllocatorInstance,piVar4,piVar1);
  lVar7 = (longlong)iVar6;
  pFVar5 = (this->RetryDelayTimes).AllocatorInstance.Data;
  *(undefined4 *)(pFVar5 + lVar7 * 4) = 0x3f000000;
  *(undefined4 *)(pFVar5 + lVar7 * 4 + 4) = 0x3f800000;
  *(undefined4 *)(pFVar5 + lVar7 * 4 + 8) = 0x3f800000;
  *(undefined4 *)(pFVar5 + lVar7 * 4 + 0xc) = 0x40400000;
  *(undefined4 *)(pFVar5 + lVar7 * 4 + 0x10) = 0x40400000;
  *(undefined4 *)(pFVar5 + lVar7 * 4 + 0x14) = 0x41200000;
  *(undefined4 *)(pFVar5 + lVar7 * 4 + 0x18) = 0x41200000;
  *(undefined4 *)(pFVar5 + lVar7 * 4 + 0x1c) = 0x41a00000;
  *(undefined4 *)(pFVar5 + lVar7 * 4 + 0x20) = 0x41a00000;
  *(undefined4 *)(pFVar5 + lVar7 * 4 + 0x24) = 0x41f00000;
  *piVar2 = 0;
  if (*piVar3 != 5) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,5,&(this->HealthPercentages).AllocatorInstance,0,piVar3);
  }
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,5,&(this->HealthPercentages).AllocatorInstance,piVar2,piVar3);
  pFVar5 = (this->HealthPercentages).AllocatorInstance.Data;
  lVar7 = (longlong)iVar6;
  *(undefined8 *)(pFVar5 + lVar7 * 4) = 0;
  *(undefined4 *)(pFVar5 + lVar7 * 4 + 8) = 0x3f666666;
  *(undefined4 *)(pFVar5 + lVar7 * 4 + 0xc) = 0x3f7d70a4;
  *(undefined4 *)(pFVar5 + lVar7 * 4 + 0x10) = 0x3f800000;
  return this;
}

// FCloudSourceConfig @ 14327f1b0

FCloudSourceConfig * __thiscall
BuildPatchServices::FCloudSourceConfig::FCloudSourceConfig
          (FCloudSourceConfig *this,FCloudSourceConfig *param_1)

{
  int *piVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  piVar1 = &(this->CloudRoots).ArrayMax;
  (this->CloudRoots).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->CloudRoots).ArrayNum;
  pFVar4 = (param_1->CloudRoots).AllocatorInstance.Data;
  (this->CloudRoots).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,(ForAnyElementType *)this,iVar3,piVar1);
    ConstructItems<FString,FString,int>
              ((this->CloudRoots).AllocatorInstance.Data,(FString *)pFVar4,iVar3);
  }
  pTVar2 = &this->RetryDelayTimes;
  this->MaxRetryCount = param_1->MaxRetryCount;
  this->PreFetchMinimum = param_1->PreFetchMinimum;
  this->PreFetchMaximum = param_1->PreFetchMaximum;
  piVar1 = &(this->RetryDelayTimes).ArrayMax;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->RetryDelayTimes).ArrayNum;
  pFVar4 = (param_1->RetryDelayTimes).AllocatorInstance.Data;
  (this->RetryDelayTimes).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar4,(longlong)iVar3 << 2);
  }
  pTVar2 = &this->HealthPercentages;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->HealthPercentages).ArrayMax;
  iVar3 = (param_1->HealthPercentages).ArrayNum;
  pFVar4 = (param_1->HealthPercentages).AllocatorInstance.Data;
  (this->HealthPercentages).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar4,(longlong)iVar3 << 2);
  }
  this->DisconnectedDelay = param_1->DisconnectedDelay;
  this->bBeginDownloadsOnFirstGet = param_1->bBeginDownloadsOnFirstGet;
  this->TcpZeroWindowMinimumSeconds = param_1->TcpZeroWindowMinimumSeconds;
  this->SharedContext = param_1->SharedContext;
  this->bRunOwnThread = param_1->bRunOwnThread;
  return this;
}

