// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemandCore
// Functions: 17

// TIoStatusOr<UE::IoStore::FOnDemandCacheUsage> @ 1445870c0

TIoStatusOr<UE::IoStore::FOnDemandCacheUsage> * __thiscall
TIoStatusOr<UE::IoStore::FOnDemandCacheUsage>::TIoStatusOr<UE::IoStore::FOnDemandCacheUsage>
          (TIoStatusOr<UE::IoStore::FOnDemandCacheUsage> *this,FOnDemandCacheUsage *param_1)

{
  ulong64 uVar1;
  
  FIoStatus::FIoStatus(&this->StatusValue);
  FIoStatus::operator=(&this->StatusValue,&FIoStatus::Ok);
  *(ulong64 *)(this->Value).Pad = (param_1->InstallCache).MaxSize;
  *(ulong64 *)((this->Value).Pad + 8) = (param_1->InstallCache).TotalSize;
  *(ulong64 *)((this->Value).Pad + 0x10) = (param_1->InstallCache).ReferencedBlockSize;
  *(ulong64 *)((this->Value).Pad + 0x18) = (param_1->InstallCache).ReferencedSize;
  *(ulong64 *)((this->Value).Pad + 0x20) = (param_1->InstallCache).FragmentedChunksSize;
  (this->Value).Pad[0x28] = '\0';
  (this->Value).Pad[0x29] = '\0';
  (this->Value).Pad[0x2a] = '\0';
  (this->Value).Pad[0x2b] = '\0';
  (this->Value).Pad[0x2c] = '\0';
  (this->Value).Pad[0x2d] = '\0';
  (this->Value).Pad[0x2e] = '\0';
  (this->Value).Pad[0x2f] = '\0';
  *(FScriptContainerElement **)((this->Value).Pad + 0x28) =
       (param_1->InstallCache).ReferencedBytesByHandle.AllocatorInstance.Data;
  (param_1->InstallCache).ReferencedBytesByHandle.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(int *)((this->Value).Pad + 0x30) = (param_1->InstallCache).ReferencedBytesByHandle.ArrayNum;
  *(int *)((this->Value).Pad + 0x34) = (param_1->InstallCache).ReferencedBytesByHandle.ArrayMax;
  (param_1->InstallCache).ReferencedBytesByHandle.ArrayNum = 0;
  (param_1->InstallCache).ReferencedBytesByHandle.ArrayMax = 0;
  uVar1 = (param_1->StreamingCache).TotalSize;
  *(ulong64 *)((this->Value).Pad + 0x38) = (param_1->StreamingCache).MaxSize;
  *(ulong64 *)((this->Value).Pad + 0x40) = uVar1;
  return this;
}

// TIoStatusOr<UE::IoStore::FOnDemandToc> @ 144587150

TIoStatusOr<UE::IoStore::FOnDemandToc> * __thiscall
TIoStatusOr<UE::IoStore::FOnDemandToc>::TIoStatusOr<UE::IoStore::FOnDemandToc>
          (TIoStatusOr<UE::IoStore::FOnDemandToc> *this,FOnDemandToc *param_1)

{
  uint uVar1;
  long64 lVar2;
  
  FIoStatus::FIoStatus(&this->StatusValue);
  FIoStatus::operator=(&this->StatusValue,&FIoStatus::Ok);
  *(ulong64 *)(this->Value).Pad = (param_1->Header).Magic;
  *(uint *)((this->Value).Pad + 8) = (param_1->Header).Version;
  *(uint *)((this->Value).Pad + 0xc) = (param_1->Header).Flags;
  uVar1 = (param_1->Header).BlockSize;
  (this->Value).Pad[0x18] = '\0';
  (this->Value).Pad[0x19] = '\0';
  (this->Value).Pad[0x1a] = '\0';
  (this->Value).Pad[0x1b] = '\0';
  (this->Value).Pad[0x1c] = '\0';
  (this->Value).Pad[0x1d] = '\0';
  (this->Value).Pad[0x1e] = '\0';
  (this->Value).Pad[0x1f] = '\0';
  *(uint *)((this->Value).Pad + 0x10) = uVar1;
  *(FScriptContainerElement **)((this->Value).Pad + 0x18) =
       (param_1->Header).CompressionFormat.Data.AllocatorInstance.Data;
  (param_1->Header).CompressionFormat.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)((this->Value).Pad + 0x20) = (param_1->Header).CompressionFormat.Data.ArrayNum;
  *(int *)((this->Value).Pad + 0x24) = (param_1->Header).CompressionFormat.Data.ArrayMax;
  (param_1->Header).CompressionFormat.Data.ArrayNum = 0;
  (param_1->Header).CompressionFormat.Data.ArrayMax = 0;
  (this->Value).Pad[0x28] = '\0';
  (this->Value).Pad[0x29] = '\0';
  (this->Value).Pad[0x2a] = '\0';
  (this->Value).Pad[0x2b] = '\0';
  (this->Value).Pad[0x2c] = '\0';
  (this->Value).Pad[0x2d] = '\0';
  (this->Value).Pad[0x2e] = '\0';
  (this->Value).Pad[0x2f] = '\0';
  *(FScriptContainerElement **)((this->Value).Pad + 0x28) =
       (param_1->Header).ChunksDirectory.Data.AllocatorInstance.Data;
  (param_1->Header).ChunksDirectory.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)((this->Value).Pad + 0x30) = (param_1->Header).ChunksDirectory.Data.ArrayNum;
  *(int *)((this->Value).Pad + 0x34) = (param_1->Header).ChunksDirectory.Data.ArrayMax;
  (param_1->Header).ChunksDirectory.Data.ArrayNum = 0;
  (param_1->Header).ChunksDirectory.Data.ArrayMax = 0;
  (this->Value).Pad[0x38] = '\0';
  (this->Value).Pad[0x39] = '\0';
  (this->Value).Pad[0x3a] = '\0';
  (this->Value).Pad[0x3b] = '\0';
  (this->Value).Pad[0x3c] = '\0';
  (this->Value).Pad[0x3d] = '\0';
  (this->Value).Pad[0x3e] = '\0';
  (this->Value).Pad[0x3f] = '\0';
  *(FScriptContainerElement **)((this->Value).Pad + 0x38) =
       (param_1->Header).HostGroupName.Data.AllocatorInstance.Data;
  (param_1->Header).HostGroupName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)((this->Value).Pad + 0x40) = (param_1->Header).HostGroupName.Data.ArrayNum;
  *(int *)((this->Value).Pad + 0x44) = (param_1->Header).HostGroupName.Data.ArrayMax;
  (param_1->Header).HostGroupName.Data.ArrayNum = 0;
  (param_1->Header).HostGroupName.Data.ArrayMax = 0;
  lVar2 = (param_1->Meta).EpochTimestamp;
  (this->Value).Pad[0x50] = '\0';
  (this->Value).Pad[0x51] = '\0';
  (this->Value).Pad[0x52] = '\0';
  (this->Value).Pad[0x53] = '\0';
  (this->Value).Pad[0x54] = '\0';
  (this->Value).Pad[0x55] = '\0';
  (this->Value).Pad[0x56] = '\0';
  (this->Value).Pad[0x57] = '\0';
  *(long64 *)((this->Value).Pad + 0x48) = lVar2;
  *(FScriptContainerElement **)((this->Value).Pad + 0x50) =
       (param_1->Meta).BuildVersion.Data.AllocatorInstance.Data;
  (param_1->Meta).BuildVersion.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)((this->Value).Pad + 0x58) = (param_1->Meta).BuildVersion.Data.ArrayNum;
  *(int *)((this->Value).Pad + 0x5c) = (param_1->Meta).BuildVersion.Data.ArrayMax;
  (param_1->Meta).BuildVersion.Data.ArrayNum = 0;
  (param_1->Meta).BuildVersion.Data.ArrayMax = 0;
  (this->Value).Pad[0x60] = '\0';
  (this->Value).Pad[0x61] = '\0';
  (this->Value).Pad[0x62] = '\0';
  (this->Value).Pad[99] = '\0';
  (this->Value).Pad[100] = '\0';
  (this->Value).Pad[0x65] = '\0';
  (this->Value).Pad[0x66] = '\0';
  (this->Value).Pad[0x67] = '\0';
  *(FScriptContainerElement **)((this->Value).Pad + 0x60) =
       (param_1->Meta).TargetPlatform.Data.AllocatorInstance.Data;
  (param_1->Meta).TargetPlatform.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)((this->Value).Pad + 0x68) = (param_1->Meta).TargetPlatform.Data.ArrayNum;
  *(int *)((this->Value).Pad + 0x6c) = (param_1->Meta).TargetPlatform.Data.ArrayMax;
  (param_1->Meta).TargetPlatform.Data.ArrayNum = 0;
  (param_1->Meta).TargetPlatform.Data.ArrayMax = 0;
  (this->Value).Pad[0x70] = '\0';
  (this->Value).Pad[0x71] = '\0';
  (this->Value).Pad[0x72] = '\0';
  (this->Value).Pad[0x73] = '\0';
  (this->Value).Pad[0x74] = '\0';
  (this->Value).Pad[0x75] = '\0';
  (this->Value).Pad[0x76] = '\0';
  (this->Value).Pad[0x77] = '\0';
  *(FScriptContainerElement **)((this->Value).Pad + 0x70) =
       (param_1->Containers).AllocatorInstance.Data;
  (param_1->Containers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)((this->Value).Pad + 0x78) = (param_1->Containers).ArrayNum;
  *(int *)((this->Value).Pad + 0x7c) = (param_1->Containers).ArrayMax;
  (param_1->Containers).ArrayNum = 0;
  (param_1->Containers).ArrayMax = 0;
  (this->Value).Pad[0x80] = '\0';
  (this->Value).Pad[0x81] = '\0';
  (this->Value).Pad[0x82] = '\0';
  (this->Value).Pad[0x83] = '\0';
  (this->Value).Pad[0x84] = '\0';
  (this->Value).Pad[0x85] = '\0';
  (this->Value).Pad[0x86] = '\0';
  (this->Value).Pad[0x87] = '\0';
  *(FScriptContainerElement **)((this->Value).Pad + 0x80) =
       (param_1->AdditionalFiles).AllocatorInstance.Data;
  (param_1->AdditionalFiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)((this->Value).Pad + 0x88) = (param_1->AdditionalFiles).ArrayNum;
  *(int *)((this->Value).Pad + 0x8c) = (param_1->AdditionalFiles).ArrayMax;
  (param_1->AdditionalFiles).ArrayNum = 0;
  (param_1->AdditionalFiles).ArrayMax = 0;
  (this->Value).Pad[0x90] = '\0';
  (this->Value).Pad[0x91] = '\0';
  (this->Value).Pad[0x92] = '\0';
  (this->Value).Pad[0x93] = '\0';
  (this->Value).Pad[0x94] = '\0';
  (this->Value).Pad[0x95] = '\0';
  (this->Value).Pad[0x96] = '\0';
  (this->Value).Pad[0x97] = '\0';
  *(FScriptContainerElement **)((this->Value).Pad + 0x90) =
       (param_1->TagSets).AllocatorInstance.Data;
  (param_1->TagSets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)((this->Value).Pad + 0x98) = (param_1->TagSets).ArrayNum;
  *(int *)((this->Value).Pad + 0x9c) = (param_1->TagSets).ArrayMax;
  (param_1->TagSets).ArrayNum = 0;
  (param_1->TagSets).ArrayMax = 0;
  return this;
}

// TIoStatusOr<UE::IoStore::FOnDemandToc> @ 1445872f0

TIoStatusOr<UE::IoStore::FOnDemandToc> * __thiscall
TIoStatusOr<UE::IoStore::FOnDemandToc>::TIoStatusOr<UE::IoStore::FOnDemandToc>
          (TIoStatusOr<UE::IoStore::FOnDemandToc> *this,FIoStatus *param_1)

{
  code *pcVar1;
  bool bVar2;
  TIoStatusOr<UE::IoStore::FOnDemandToc> *pTVar3;
  
  FIoStatus::FIoStatus(&this->StatusValue);
  if (param_1->ErrorCode == Ok) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InStatus.IsOk()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\IO\\IoStatus.h"
                       ,0x102,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TIoStatusOr<UE::IoStore::FOnDemandToc> *)(*pcVar1)();
      return pTVar3;
    }
  }
  FIoStatus::operator=(&this->StatusValue,param_1);
  FIoStatus::~FIoStatus(param_1);
  return this;
}

// TIoStatusOr<UE::IoStore::FOnDemandHostGroup> @ 144587360

TIoStatusOr<UE::IoStore::FOnDemandHostGroup> * __thiscall
TIoStatusOr<UE::IoStore::FOnDemandHostGroup>::TIoStatusOr<UE::IoStore::FOnDemandHostGroup>
          (TIoStatusOr<UE::IoStore::FOnDemandHostGroup> *this,FOnDemandHostGroup *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  FIoStatus::FIoStatus(&this->StatusValue);
  FIoStatus::operator=(&this->StatusValue,&FIoStatus::Ok);
  *(FImpl **)(this->Value).Pad = (param_1->Impl).Object;
  pTVar1 = (param_1->Impl).SharedReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)((this->Value).Pad + 8) = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TIoStatusOr<UE::IoStore::FOnDemandHostGroup> @ 1445873b0

TIoStatusOr<UE::IoStore::FOnDemandHostGroup> * __thiscall
TIoStatusOr<UE::IoStore::FOnDemandHostGroup>::TIoStatusOr<UE::IoStore::FOnDemandHostGroup>
          (TIoStatusOr<UE::IoStore::FOnDemandHostGroup> *this,FIoStatus *param_1)

{
  code *pcVar1;
  bool bVar2;
  TIoStatusOr<UE::IoStore::FOnDemandHostGroup> *pTVar3;
  
  FIoStatus::FIoStatus(&this->StatusValue);
  if (param_1->ErrorCode == Ok) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InStatus.IsOk()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\IO\\IoStatus.h"
                       ,0x102,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TIoStatusOr<UE::IoStore::FOnDemandHostGroup> *)(*pcVar1)();
      return pTVar3;
    }
  }
  FIoStatus::operator=(&this->StatusValue,param_1);
  FIoStatus::~FIoStatus(param_1);
  return this;
}

// ~TIoStatusOr<UE::IoStore::FOnDemandCacheUsage> @ 144587770

void __thiscall
TIoStatusOr<UE::IoStore::FOnDemandCacheUsage>::~TIoStatusOr<UE::IoStore::FOnDemandCacheUsage>
          (TIoStatusOr<UE::IoStore::FOnDemandCacheUsage> *this)

{
  EIoErrorCode EVar1;
  void *pvVar2;
  
  EVar1 = (this->StatusValue).ErrorCode;
  FIoStatus::operator=(&this->StatusValue,Unknown);
  if (EVar1 == Ok) {
    DestructItems<UE::IoStore::FOnDemandInstallHandleCacheUsage,int>
              (*(FOnDemandInstallHandleCacheUsage **)((this->Value).Pad + 0x28),
               *(int *)((this->Value).Pad + 0x30));
    pvVar2 = *(void **)((this->Value).Pad + 0x28);
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
  }
  FIoStatus::~FIoStatus(&this->StatusValue);
  return;
}

// ~TIoStatusOr<UE::IoStore::FOnDemandToc> @ 1445877c0

void __thiscall
TIoStatusOr<UE::IoStore::FOnDemandToc>::~TIoStatusOr<UE::IoStore::FOnDemandToc>
          (TIoStatusOr<UE::IoStore::FOnDemandToc> *this)

{
  EIoErrorCode EVar1;
  
  EVar1 = (this->StatusValue).ErrorCode;
  FIoStatus::operator=(&this->StatusValue,Unknown);
  if (EVar1 == Ok) {
    UE::IoStore::FOnDemandToc::~FOnDemandToc((FOnDemandToc *)&this->Value);
  }
  FIoStatus::~FIoStatus(&this->StatusValue);
  return;
}

// ~TIoStatusOr<UE::IoStore::FOnDemandHostGroup> @ 144587800

void __thiscall
TIoStatusOr<UE::IoStore::FOnDemandHostGroup>::~TIoStatusOr<UE::IoStore::FOnDemandHostGroup>
          (TIoStatusOr<UE::IoStore::FOnDemandHostGroup> *this)

{
  EIoErrorCode EVar1;
  
  EVar1 = (this->StatusValue).ErrorCode;
  FIoStatus::operator=(&this->StatusValue,Unknown);
  if (EVar1 == Ok) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->Value).Pad + 8));
  }
  FIoStatus::~FIoStatus(&this->StatusValue);
  return;
}

// ConsumeValueOrDie @ 14458a4f0

FOnDemandCacheUsage * __thiscall
TIoStatusOr<UE::IoStore::FOnDemandCacheUsage>::ConsumeValueOrDie
          (TIoStatusOr<UE::IoStore::FOnDemandCacheUsage> *this,
          FOnDemandCacheUsage *__return_storage_ptr__)

{
  ulong64 uVar1;
  
  if ((this->StatusValue).ErrorCode != Ok) {
    StatusOrCrash(&this->StatusValue);
  }
  FIoStatus::operator=(&this->StatusValue,&FIoStatus::Unknown);
  (__return_storage_ptr__->InstallCache).MaxSize = *(ulong64 *)(this->Value).Pad;
  (__return_storage_ptr__->InstallCache).TotalSize = *(ulong64 *)((this->Value).Pad + 8);
  (__return_storage_ptr__->InstallCache).ReferencedBlockSize =
       *(ulong64 *)((this->Value).Pad + 0x10);
  (__return_storage_ptr__->InstallCache).ReferencedSize = *(ulong64 *)((this->Value).Pad + 0x18);
  (__return_storage_ptr__->InstallCache).FragmentedChunksSize =
       *(ulong64 *)((this->Value).Pad + 0x20);
  (__return_storage_ptr__->InstallCache).ReferencedBytesByHandle.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->InstallCache).ReferencedBytesByHandle.AllocatorInstance.Data =
       *(FScriptContainerElement **)((this->Value).Pad + 0x28);
  (this->Value).Pad[0x28] = '\0';
  (this->Value).Pad[0x29] = '\0';
  (this->Value).Pad[0x2a] = '\0';
  (this->Value).Pad[0x2b] = '\0';
  (this->Value).Pad[0x2c] = '\0';
  (this->Value).Pad[0x2d] = '\0';
  (this->Value).Pad[0x2e] = '\0';
  (this->Value).Pad[0x2f] = '\0';
  (__return_storage_ptr__->InstallCache).ReferencedBytesByHandle.ArrayNum =
       *(int *)((this->Value).Pad + 0x30);
  (__return_storage_ptr__->InstallCache).ReferencedBytesByHandle.ArrayMax =
       *(int *)((this->Value).Pad + 0x34);
  (this->Value).Pad[0x30] = '\0';
  (this->Value).Pad[0x31] = '\0';
  (this->Value).Pad[0x32] = '\0';
  (this->Value).Pad[0x33] = '\0';
  (this->Value).Pad[0x34] = '\0';
  (this->Value).Pad[0x35] = '\0';
  (this->Value).Pad[0x36] = '\0';
  (this->Value).Pad[0x37] = '\0';
  uVar1 = *(ulong64 *)((this->Value).Pad + 0x40);
  (__return_storage_ptr__->StreamingCache).MaxSize = *(ulong64 *)((this->Value).Pad + 0x38);
  (__return_storage_ptr__->StreamingCache).TotalSize = uVar1;
  return __return_storage_ptr__;
}

// ConsumeValueOrDie @ 14458a580

FOnDemandHostGroup * __thiscall
TIoStatusOr<UE::IoStore::FOnDemandHostGroup>::ConsumeValueOrDie
          (TIoStatusOr<UE::IoStore::FOnDemandHostGroup> *this,
          FOnDemandHostGroup *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((this->StatusValue).ErrorCode != Ok) {
    StatusOrCrash(&this->StatusValue);
  }
  FIoStatus::operator=(&this->StatusValue,&FIoStatus::Unknown);
  (__return_storage_ptr__->Impl).Object = *(FImpl **)(this->Value).Pad;
  pTVar1 = *(TReferenceControllerBase<1> **)((this->Value).Pad + 8);
  (__return_storage_ptr__->Impl).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// IsOk @ 14458f220

bool __thiscall
TIoStatusOr<UE::IoStore::FOnDemandCacheUsage>::IsOk
          (TIoStatusOr<UE::IoStore::FOnDemandCacheUsage> *this)

{
  return (this->StatusValue).ErrorCode == Ok;
}

// IsOk @ 14458f230

bool __thiscall
TIoStatusOr<UE::IoStore::FOnDemandHostGroup>::IsOk
          (TIoStatusOr<UE::IoStore::FOnDemandHostGroup> *this)

{
  return (this->StatusValue).ErrorCode == Ok;
}

// Reset @ 1445931f0

void __thiscall
TIoStatusOr<UE::IoStore::FOnDemandCacheUsage>::Reset
          (TIoStatusOr<UE::IoStore::FOnDemandCacheUsage> *this)

{
  EIoErrorCode EVar1;
  void *pvVar2;
  
  EVar1 = (this->StatusValue).ErrorCode;
  FIoStatus::operator=(&this->StatusValue,Unknown);
  if (EVar1 == Ok) {
    DestructItems<UE::IoStore::FOnDemandInstallHandleCacheUsage,int>
              (*(FOnDemandInstallHandleCacheUsage **)((this->Value).Pad + 0x28),
               *(int *)((this->Value).Pad + 0x30));
    pvVar2 = *(void **)((this->Value).Pad + 0x28);
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
  }
  return;
}

// Reset @ 144593240

void __thiscall
TIoStatusOr<UE::IoStore::FOnDemandToc>::Reset(TIoStatusOr<UE::IoStore::FOnDemandToc> *this)

{
  EIoErrorCode EVar1;
  
  EVar1 = (this->StatusValue).ErrorCode;
  FIoStatus::operator=(&this->StatusValue,Unknown);
  if (EVar1 == Ok) {
    UE::IoStore::FOnDemandToc::~FOnDemandToc((FOnDemandToc *)&this->Value);
  }
  return;
}

// Reset @ 144593280

void __thiscall
TIoStatusOr<UE::IoStore::FOnDemandHostGroup>::Reset
          (TIoStatusOr<UE::IoStore::FOnDemandHostGroup> *this)

{
  EIoErrorCode EVar1;
  
  EVar1 = (this->StatusValue).ErrorCode;
  FIoStatus::operator=(&this->StatusValue,Unknown);
  if (EVar1 == Ok) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->Value).Pad + 8));
  }
  return;
}

// Status @ 1445939a0

FIoStatus * __thiscall
TIoStatusOr<UE::IoStore::FOnDemandCacheUsage>::Status
          (TIoStatusOr<UE::IoStore::FOnDemandCacheUsage> *this)

{
  return &this->StatusValue;
}

// Status @ 1445939b0

FIoStatus * __thiscall
TIoStatusOr<UE::IoStore::FOnDemandHostGroup>::Status
          (TIoStatusOr<UE::IoStore::FOnDemandHostGroup> *this)

{
  return &this->StatusValue;
}

