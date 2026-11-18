// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InstallBundleManager
// Functions: 1

// FInstallBundleProgress @ 148bc27c0

FInstallBundleProgress * __thiscall
FInstallBundleProgress::FInstallBundleProgress
          (FInstallBundleProgress *this,FInstallBundleProgress *param_1)

{
  TArray<FBuildInstallerStat,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FBuildInstallerStat *pFVar4;
  
  pTVar1 = &this->Stats;
  this->BundleName = param_1->BundleName;
  this->Status = param_1->Status;
  this->PauseFlags = param_1->PauseFlags;
  this->BackgroundDownload_Percent = param_1->BackgroundDownload_Percent;
  this->InstallOnly_Percent = param_1->InstallOnly_Percent;
  this->Install_Percent = param_1->Install_Percent;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Stats).ArrayMax;
  iVar3 = (param_1->Stats).ArrayNum;
  pFVar4 = (FBuildInstallerStat *)(param_1->Stats).AllocatorInstance.Data;
  (this->Stats).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FBuildInstallerStat,FBuildInstallerStat,int>
              ((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
  }
  this->Finishing_Percent = param_1->Finishing_Percent;
  return this;
}

