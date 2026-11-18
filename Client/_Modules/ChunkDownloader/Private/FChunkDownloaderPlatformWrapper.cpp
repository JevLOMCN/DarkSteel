// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChunkDownloader
// Functions: 10

// GetChunkLocation @ 14f01c750

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall
FChunkDownloaderPlatformWrapper::GetChunkLocation
          (FChunkDownloaderPlatformWrapper *this,uint param_1)

{
  FChunkDownloader *this_00;
  EChunkStatus EVar1;
  
  if (param_1 == 0) {
    return BestLocation;
  }
  this_00 = this->ChunkDownloader->Object;
  if (this_00 != (FChunkDownloader *)0x0) {
    EVar1 = FChunkDownloader::GetChunkStatus(this_00,param_1);
    if (EVar1 == Mounted) {
      return BestLocation;
    }
    if ((((EVar1 == Cached) || (EVar1 == Downloading)) || (EVar1 == Partial)) || (EVar1 == Remote))
    {
      return NotAvailable;
    }
  }
  return DoesNotExist;
}

// PrioritizeChunk @ 14f01c7b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FChunkDownloaderPlatformWrapper::PrioritizeChunk
          (FChunkDownloaderPlatformWrapper *this,uint param_1,Type param_2)

{
  FChunkDownloader *this_00;
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [40];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  this_00 = this->ChunkDownloader->Object;
  if (this_00 == (FChunkDownloader *)0x0) {
    return false;
  }
  local_48._0_8_ = 0;
  local_20 = (longlong *)0x0;
  FChunkDownloader::MountChunk(this_00,param_1,(TFunction<void___cdecl(bool)> *)local_48);
  if (local_48._0_8_ != 0) {
    plVar1 = (longlong *)(local_48 + 0x10);
    if (local_20 != (longlong *)0x0) {
      plVar1 = local_20;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  return true;
}

// AddChunkInstallDelegate @ 14f01c840

FDelegateHandle __thiscall
FChunkDownloaderPlatformWrapper::AddChunkInstallDelegate
          (FChunkDownloaderPlatformWrapper *this,
          TDelegate<void___cdecl(unsigned_int,bool),FDefaultDelegateUserPolicy> *param_1)

{
  TSharedPtr<FChunkDownloader,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FChunkDownloader *this_00;
  FDelegateHandle FVar4;
  TDelegateBase<FNotThreadSafeDelegateMode> *in_R8;
  TRawPtrProxy<FChunkDownloader> local_res8;
  
  if (this->ChunkDownloader->Object == (FChunkDownloader *)0x0) {
    this_00 = ::operator_new(0x270);
    if (this_00 == (FChunkDownloader *)0x0) {
      local_res8.Object = (FChunkDownloader *)0x0;
    }
    else {
      local_res8.Object = FChunkDownloader::FChunkDownloader(this_00);
      if ((((local_res8.Object != (FChunkDownloader *)0x0) && ((local_res8.Object)->_padding_ != 0))
          && ((local_res8.Object)->_padding_ != 0)) &&
         (0 < *(int *)((local_res8.Object)->_padding_ + 8))) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InObject || !InObject->DoesSharedInstanceExist()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x7a5,L"Trying to share an already-shared object");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          FVar4.ID = (*pcVar2)();
          return (FDelegateHandle)FVar4.ID;
        }
      }
    }
    TSharedPtr<FChunkDownloader,1>::operator=<FChunkDownloader>(this->ChunkDownloader,&local_res8);
  }
  pTVar1 = this->ChunkDownloader;
  if (pTVar1->Object == (FChunkDownloader *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar4.ID = (*pcVar2)();
      return (FDelegateHandle)FVar4.ID;
    }
  }
  TMulticastDelegateRegistration<void___cdecl(unsigned_int,bool),FDefaultDelegateUserPolicy>::Add
            ((TMulticastDelegateRegistration<void___cdecl(unsigned_int,bool),FDefaultDelegateUserPolicy>
              *)&pTVar1->Object->OnChunkMounted,param_1);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(in_R8);
  return (FDelegateHandle)(ulong64)param_1;
}

// RemoveChunkInstallDelegate @ 14f01c950

void __thiscall
FChunkDownloaderPlatformWrapper::RemoveChunkInstallDelegate
          (FChunkDownloaderPlatformWrapper *this,FDelegateHandle param_1)

{
  FChunkDownloader *pFVar1;
  
  pFVar1 = this->ChunkDownloader->Object;
  if ((pFVar1 != (FChunkDownloader *)0x0) && (param_1.ID != 0)) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pFVar1->OnChunkMounted,param_1
              );
    return;
  }
  return;
}

// GetInstallSpeed @ 14f01c980

Type __thiscall
FChunkDownloaderPlatformWrapper::GetInstallSpeed(FChunkDownloaderPlatformWrapper *this)

{
  return Fast;
}

// SetInstallSpeed @ 14f01c990

bool __thiscall
FChunkDownloaderPlatformWrapper::SetInstallSpeed(FChunkDownloaderPlatformWrapper *this,Type param_1)

{
  return false;
}

// DebugStartNextChunk @ 14f01c9a0

bool __thiscall
FChunkDownloaderPlatformWrapper::DebugStartNextChunk(FChunkDownloaderPlatformWrapper *this)

{
  return false;
}

// GetProgressReportingTypeSupported @ 14f01c9b0

bool __thiscall
FChunkDownloaderPlatformWrapper::GetProgressReportingTypeSupported
          (FChunkDownloaderPlatformWrapper *this,Type param_1)

{
  return false;
}

// GetChunkProgress @ 14f01c9c0

float __thiscall
FChunkDownloaderPlatformWrapper::GetChunkProgress
          (FChunkDownloaderPlatformWrapper *this,uint param_1,Type param_2)

{
  return 0.0;
}

// ~FChunkDownloaderPlatformWrapper @ 14f01f3c0

void __thiscall
FChunkDownloaderPlatformWrapper::~FChunkDownloaderPlatformWrapper
          (FChunkDownloaderPlatformWrapper *this)

{
  this->_padding_ = (longlong)&___7FChunkDownloaderPlatformWrapper__6B_;
  FGenericPlatformChunkInstall::~FGenericPlatformChunkInstall((FGenericPlatformChunkInstall *)this);
  return;
}

