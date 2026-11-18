// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 18

// FBuildStatistics @ 14327e270

FBuildStatistics * __thiscall
BuildPatchServices::FBuildStatistics::FBuildStatistics
          (FBuildStatistics *this,TSharedRef<BuildPatchServices::FBuildPatchInstaller,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->_padding_ = (longlong)&___7FBuildStatistics_BuildPatchServices__6B_;
  (this->Installer).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->Installer).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// GetBuildSize @ 1432d3710

long64 __thiscall BuildPatchServices::FBuildStatistics::GetBuildSize(FBuildStatistics *this)

{
  IFileConstructorStatistics *pIVar1;
  long64 lVar2;
  
  pIVar1 = FBuildPatchInstaller::GetFileConstructorStatistics((this->Installer).Object);
                    /* WARNING: Could not recover jumptable at 0x0001432d372e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar2 = (**(code **)((longlong)*pIVar1 + 0x80))(pIVar1,*(code **)((longlong)*pIVar1 + 0x80));
  return lVar2;
}

// GetConfiguration @ 1432d41d0

FBuildInstallerConfiguration * __thiscall
BuildPatchServices::FBuildStatistics::GetConfiguration(FBuildStatistics *this)

{
  FBuildInstallerConfiguration *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001432d41d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FBuildInstallerConfiguration *)
           (**(code **)(((this->Installer).Object)->_padding_ + 0xd8))();
  return pFVar1;
}

// GetCurrentDownloads @ 1432d4260

TArray<BuildPatchServices::FDownload,TSizedDefaultAllocator<32>_> * __thiscall
BuildPatchServices::FBuildStatistics::GetCurrentDownloads
          (FBuildStatistics *this,
          TArray<BuildPatchServices::FDownload,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  IDownloadServiceStatistics *pIVar1;
  
  pIVar1 = FBuildPatchInstaller::GetDownloadServiceStatistics((this->Installer).Object);
  (**(code **)((longlong)*pIVar1 + 0x40))(pIVar1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetCurrentWorkingData @ 1432d49b0

FGuid * __thiscall
BuildPatchServices::FBuildStatistics::GetCurrentWorkingData
          (FBuildStatistics *this,FGuid *__return_storage_ptr__)

{
  IFileConstructorStatistics *pIVar1;
  
  pIVar1 = FBuildPatchInstaller::GetFileConstructorStatistics((this->Installer).Object);
  (**(code **)((longlong)*pIVar1 + 0x98))(pIVar1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetCurrentWorkingFileName @ 1432d49f0

FString * __thiscall
BuildPatchServices::FBuildStatistics::GetCurrentWorkingFileName
          (FBuildStatistics *this,FString *__return_storage_ptr__)

{
  IFileConstructorStatistics *pIVar1;
  
  pIVar1 = FBuildPatchInstaller::GetFileConstructorStatistics((this->Installer).Object);
  (**(code **)((longlong)*pIVar1 + 0xa0))(pIVar1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetCurrentWorkingFileProgress @ 1432d4a30

float __thiscall
BuildPatchServices::FBuildStatistics::GetCurrentWorkingFileProgress(FBuildStatistics *this)

{
  IFileConstructorStatistics *pIVar1;
  float fVar2;
  
  pIVar1 = FBuildPatchInstaller::GetFileConstructorStatistics((this->Installer).Object);
                    /* WARNING: Could not recover jumptable at 0x0001432d4a4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar2 = (float)(**(code **)((longlong)*pIVar1 + 0xa8))
                           (pIVar1,*(code **)((longlong)*pIVar1 + 0xa8));
  return fVar2;
}

// GetDiskReadByteSpeed @ 1432d60e0

double __thiscall BuildPatchServices::FBuildStatistics::GetDiskReadByteSpeed(FBuildStatistics *this)

{
  ISpeedRecorder *pIVar1;
  double dVar2;
  
  pIVar1 = FBuildPatchInstaller::GetDiskReadSpeedRecorder((this->Installer).Object);
                    /* WARNING: Could not recover jumptable at 0x0001432d6103. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar2 = (double)(**(code **)((longlong)*pIVar1 + 0x10))(pIVar1,__real_41200000);
  return dVar2;
}

// GetDiskWriteByteSpeed @ 1432d6490

double __thiscall
BuildPatchServices::FBuildStatistics::GetDiskWriteByteSpeed(FBuildStatistics *this)

{
  ISpeedRecorder *pIVar1;
  double dVar2;
  
  pIVar1 = FBuildPatchInstaller::GetDiskWriteSpeedRecorder((this->Installer).Object);
                    /* WARNING: Could not recover jumptable at 0x0001432d64b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar2 = (double)(**(code **)((longlong)*pIVar1 + 0x10))(pIVar1,__real_41200000);
  return dVar2;
}

// GetDownloadByteSpeed @ 1432d64c0

double __thiscall BuildPatchServices::FBuildStatistics::GetDownloadByteSpeed(FBuildStatistics *this)

{
  ISpeedRecorder *pIVar1;
  double dVar2;
  
  pIVar1 = FBuildPatchInstaller::GetDownloadSpeedRecorder((this->Installer).Object);
                    /* WARNING: Could not recover jumptable at 0x0001432d64e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar2 = (double)(**(code **)((longlong)*pIVar1 + 0x10))(pIVar1,__real_41200000);
  return dVar2;
}

// GetDownloadSize @ 1432d6730

long64 __thiscall BuildPatchServices::FBuildStatistics::GetDownloadSize(FBuildStatistics *this)

{
  long64 lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001432d6737. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (**(code **)(((this->Installer).Object)->_padding_ + 0x70))();
  return lVar1;
}

// GetFileOperationStates @ 1432d6cc0

TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_> * __thiscall
BuildPatchServices::FBuildStatistics::GetFileOperationStates(FBuildStatistics *this)

{
  IFileOperationTracker *pIVar1;
  TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_> *pTVar2;
  
  pIVar1 = FBuildPatchInstaller::GetFileOperationTracker((this->Installer).Object);
                    /* WARNING: Could not recover jumptable at 0x0001432d6cdb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pTVar2 = (TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_> *)
           (**(code **)((longlong)*pIVar1 + 8))(pIVar1,*(code **)((longlong)*pIVar1 + 8));
  return pTVar2;
}

// GetNumVerifyErrors @ 1432d85d0

int __thiscall BuildPatchServices::FBuildStatistics::GetNumVerifyErrors(FBuildStatistics *this)

{
  int iVar1;
  IVerifierStatistics *pIVar2;
  
  pIVar2 = FBuildPatchInstaller::GetVerifierStatistics((this->Installer).Object);
                    /* WARNING: Could not recover jumptable at 0x0001432d85eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)((longlong)*pIVar2 + 0x48))(pIVar2,*(code **)((longlong)*pIVar2 + 0x48));
  return iVar1;
}

// GetVerifyErrorCounts @ 1432d99e0

TMap<BuildPatchServices::EVerifyError,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<BuildPatchServices::EVerifyError,int,0>_>
* __thiscall
BuildPatchServices::FBuildStatistics::GetVerifyErrorCounts
          (FBuildStatistics *this,
          TMap<BuildPatchServices::EVerifyError,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<BuildPatchServices::EVerifyError,int,0>_>
          *__return_storage_ptr__)

{
  IVerifierStatistics *pIVar1;
  
  pIVar1 = FBuildPatchInstaller::GetVerifierStatistics((this->Installer).Object);
  (**(code **)((longlong)*pIVar1 + 0x50))(pIVar1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// IsDownloadActive @ 1432dbcd0

bool __thiscall BuildPatchServices::FBuildStatistics::IsDownloadActive(FBuildStatistics *this)

{
  int iVar1;
  IDownloadServiceStatistics *pIVar2;
  
  pIVar2 = FBuildPatchInstaller::GetDownloadServiceStatistics((this->Installer).Object);
  iVar1 = (**(code **)((longlong)*pIVar2 + 0x38))(pIVar2);
  return 0 < iVar1;
}

// IsHardDiskActiveAdministering @ 1432dbd30

bool __thiscall
BuildPatchServices::FBuildStatistics::IsHardDiskActiveAdministering(FBuildStatistics *this)

{
  undefined1 uVar1;
  IFileConstructorStatistics *pIVar2;
  
  pIVar2 = FBuildPatchInstaller::GetFileConstructorStatistics((this->Installer).Object);
                    /* WARNING: Could not recover jumptable at 0x0001432dbd4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*pIVar2 + 0xc0))(pIVar2,*(code **)((longlong)*pIVar2 + 0xc0));
  return (bool)uVar1;
}

// IsHardDiskActiveRead @ 1432dbd60

bool __thiscall BuildPatchServices::FBuildStatistics::IsHardDiskActiveRead(FBuildStatistics *this)

{
  char cVar1;
  IFileConstructorStatistics *pIVar2;
  IInstallChunkSourceStatistics *pIVar3;
  IVerifierStatistics *pIVar4;
  IChunkDbChunkSourceStatistics *pIVar5;
  
  pIVar2 = FBuildPatchInstaller::GetFileConstructorStatistics((this->Installer).Object);
  cVar1 = (**(code **)((longlong)*pIVar2 + 0xb8))(pIVar2);
  if (cVar1 == '\0') {
    pIVar3 = FBuildPatchInstaller::GetInstallChunkSourceStatistics((this->Installer).Object);
    cVar1 = (**(code **)((longlong)*pIVar3 + 0x40))(pIVar3);
    if (cVar1 == '\0') {
      pIVar4 = FBuildPatchInstaller::GetVerifierStatistics((this->Installer).Object);
      cVar1 = (**(code **)((longlong)*pIVar4 + 0x58))(pIVar4);
      if (cVar1 == '\0') {
        pIVar5 = FBuildPatchInstaller::GetChunkDbChunkSourceStatistics((this->Installer).Object);
        cVar1 = (**(code **)((longlong)*pIVar5 + 0x38))(pIVar5);
        if (cVar1 == '\0') {
          return false;
        }
      }
    }
  }
  return true;
}

// IsHardDiskActiveWrite @ 1432dbdf0

bool __thiscall BuildPatchServices::FBuildStatistics::IsHardDiskActiveWrite(FBuildStatistics *this)

{
  undefined1 uVar1;
  IFileConstructorStatistics *pIVar2;
  
  pIVar2 = FBuildPatchInstaller::GetFileConstructorStatistics((this->Installer).Object);
                    /* WARNING: Could not recover jumptable at 0x0001432dbe0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*pIVar2 + 0xb0))(pIVar2,*(code **)((longlong)*pIVar2 + 0xb0));
  return (bool)uVar1;
}

