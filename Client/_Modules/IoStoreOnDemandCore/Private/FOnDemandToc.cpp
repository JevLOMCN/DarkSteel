// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemandCore
// Functions: 2

// ~FOnDemandToc @ 144587a80

void __thiscall UE::IoStore::FOnDemandToc::~FOnDemandToc(FOnDemandToc *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<UE::IoStore::FOnDemandTocTagSet,int>
            ((FOnDemandTocTagSet *)(this->TagSets).AllocatorInstance.Data,(this->TagSets).ArrayNum);
  pFVar1 = (this->TagSets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<UE::IoStore::FOnDemandTocAdditionalFile,int>
            ((FOnDemandTocAdditionalFile *)(this->AdditionalFiles).AllocatorInstance.Data,
             (this->AdditionalFiles).ArrayNum);
  pFVar1 = (this->AdditionalFiles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<UE::IoStore::FOnDemandTocContainerEntry,int>
            ((FOnDemandTocContainerEntry *)(this->Containers).AllocatorInstance.Data,
             (this->Containers).ArrayNum);
  pFVar1 = (this->Containers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Meta).TargetPlatform.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Meta).BuildVersion.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Header).HostGroupName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Header).ChunksDirectory.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Header).CompressionFormat.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// LoadFromFile @ 144591100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TIoStatusOr<UE::IoStore::FOnDemandToc> * __cdecl
UE::IoStore::FOnDemandToc::LoadFromFile
          (TIoStatusOr<UE::IoStore::FOnDemandToc> *__return_storage_ptr__,FString *param_1,
          bool param_2)

{
  bool bVar1;
  int iVar2;
  size_t sVar3;
  IPlatformFile *pIVar4;
  IFileHandle *pIVar5;
  long64 lVar6;
  FArchiveFileReaderGeneric *pFVar7;
  IFileManager *pIVar8;
  longlong lVar9;
  FIoStatusBuilder *pFVar10;
  FIoStatus *pFVar11;
  EIoErrorCode EVar12;
  TSharedString<wchar_t> TVar13;
  wchar_t *pwVar14;
  undefined1 auStackY_388 [32];
  FIoStatus local_358;
  FOnDemandToc local_348;
  FIoStatus local_2a8;
  FScriptContainerElement *local_298;
  EIoErrorCode local_290;
  FIoStatusBuilder local_288;
  FIoStatus local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_388;
  local_2a8.ErrorMessage.Chars = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  iVar2 = (param_1->Data).ArrayNum;
  local_2a8.ErrorCode = iVar2 - Unknown;
  if (iVar2 == 0) {
    local_2a8.ErrorCode = Ok;
  }
  local_58.ErrorCode = local_2a8.ErrorCode;
  local_2a8.SystemErrorCode = local_58.SystemErrorCode;
  local_58.ErrorMessage.Chars = local_2a8.ErrorMessage.Chars;
  bVar1 = FPathViews::IsRelativePath((TStringView<wchar_t> *)&local_2a8);
  pwVar14 = L"";
  if ((bVar1) && (bVar1 = FGenericPlatformMisc::FileExistsInPlatformPackage(param_1), bVar1)) {
    local_2a8.ErrorMessage.Chars = FGenericPlatformMisc::RootDir();
    EVar12 = Ok;
    if ((FScriptContainerElement *)local_2a8.ErrorMessage.Chars != (FScriptContainerElement *)0x0) {
      sVar3 = wcslen(local_2a8.ErrorMessage.Chars);
      EVar12 = (EIoErrorCode)sVar3;
    }
    local_298 = (param_1->Data).AllocatorInstance.Data;
    local_2a8.ErrorCode = EVar12;
    iVar2 = (param_1->Data).ArrayNum;
    local_290 = iVar2 - Unknown;
    if (iVar2 == 0) {
      local_290 = Ok;
    }
    FPaths::CombineInternal((FString *)&local_358,(TStringView<wchar_t> *)&local_2a8,2);
    pIVar4 = IPlatformFile::GetPlatformPhysical();
    TVar13.Chars = L"";
    if (local_358.ErrorCode != Ok) {
      TVar13.Chars = local_358.ErrorMessage.Chars;
    }
    pIVar5 = (IFileHandle *)(**(code **)((longlong)*pIVar4 + 0xe8))(pIVar4,TVar13.Chars,0);
    if (pIVar5 == (IFileHandle *)0x0) {
      if ((FScriptContainerElement *)local_358.ErrorMessage.Chars != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_358.ErrorMessage.Chars);
      }
    }
    else {
      lVar6 = (**(code **)((longlong)*pIVar5 + 0x50))(pIVar5);
      TVar13.Chars = L"";
      if (local_358.ErrorCode != Ok) {
        TVar13.Chars = local_358.ErrorMessage.Chars;
      }
      pFVar7 = ::operator_new(0xe8);
      if (pFVar7 == (FArchiveFileReaderGeneric *)0x0) {
        pFVar7 = (FArchiveFileReaderGeneric *)0x0;
      }
      else {
        pFVar7 = FArchiveFileReaderGeneric::FArchiveFileReaderGeneric
                           (pFVar7,pIVar5,TVar13.Chars,lVar6,0x40000,0);
      }
      if ((FScriptContainerElement *)local_358.ErrorMessage.Chars != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_358.ErrorMessage.Chars);
      }
      if (pFVar7 != (FArchiveFileReaderGeneric *)0x0) goto LAB_1445912b1;
    }
  }
  pIVar8 = IFileManager::Get();
  if ((param_1->Data).ArrayNum != 0) {
    pwVar14 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar7 = (FArchiveFileReaderGeneric *)(**(code **)((longlong)*pIVar8 + 0x18))(pIVar8,pwVar14,0);
  if (pFVar7 == (FArchiveFileReaderGeneric *)0x0) {
    pFVar10 = FIoStatusBuilder::FIoStatusBuilder(&local_288,FileNotOpen);
    local_2a8.ErrorCode = PendingEncryptionKey;
    local_2a8.ErrorMessage.Chars = L"Failed to open \'";
    pFVar10 = FIoStatusBuilder::operator<<(pFVar10,(TStringView<wchar_t> *)&local_2a8);
    local_2a8.ErrorMessage.Chars = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    iVar2 = (param_1->Data).ArrayNum;
    local_2a8.ErrorCode = iVar2 - Unknown;
    if (iVar2 == 0) {
      local_2a8.ErrorCode = Ok;
    }
    pFVar10 = FIoStatusBuilder::operator<<(pFVar10,(TStringView<wchar_t> *)&local_2a8);
    local_2a8.ErrorCode = Unknown;
    local_2a8.ErrorMessage.Chars = L"\'";
    pFVar10 = FIoStatusBuilder::operator<<(pFVar10,(TStringView<wchar_t> *)&local_2a8);
    FIoStatusBuilder::operator_FIoStatus(pFVar10,&local_358);
    FIoStatusBuilder::~FIoStatusBuilder(&local_288);
    local_58.ErrorMessage.Chars = local_358.ErrorMessage.Chars;
    if ((FScriptContainerElement *)local_358.ErrorMessage.Chars != (FScriptContainerElement *)0x0) {
      LOCK();
      *(int *)(local_358.ErrorMessage.Chars + -4) = *(int *)(local_358.ErrorMessage.Chars + -4) + 1;
      UNLOCK();
    }
    TIoStatusOr<UE::IoStore::FOnDemandToc>::TIoStatusOr<UE::IoStore::FOnDemandToc>
              (__return_storage_ptr__,&local_58);
    FIoStatus::~FIoStatus(&local_358);
    return __return_storage_ptr__;
  }
LAB_1445912b1:
  if (param_2) {
    lVar9 = (**(code **)(pFVar7->_padding_ + 0x30))(pFVar7);
    if (lVar9 + -0x10 < 0) {
      pFVar10 = FIoStatusBuilder::FIoStatusBuilder(&local_288,CorruptToc);
      local_58.ErrorCode = Timeout;
      local_58.ErrorMessage.Chars = L"Unexpected file size";
      pFVar10 = FIoStatusBuilder::operator<<(pFVar10,(TStringView<wchar_t> *)&local_58);
      FIoStatusBuilder::operator_FIoStatus(pFVar10,&local_358);
      FIoStatusBuilder::~FIoStatusBuilder(&local_288);
      local_58.ErrorMessage.Chars = local_358.ErrorMessage.Chars;
      if ((FScriptContainerElement *)local_358.ErrorMessage.Chars != (FScriptContainerElement *)0x0)
      {
        LOCK();
        *(int *)(local_358.ErrorMessage.Chars + -4) =
             *(int *)(local_358.ErrorMessage.Chars + -4) + 1;
        UNLOCK();
      }
      TIoStatusOr<UE::IoStore::FOnDemandToc>::TIoStatusOr<UE::IoStore::FOnDemandToc>
                (__return_storage_ptr__,&local_58);
      FIoStatus::~FIoStatus(&local_358);
      (**(code **)pFVar7->_padding_)(pFVar7,1);
      return __return_storage_ptr__;
    }
    (**(code **)(pFVar7->_padding_ + 0x1b8))(pFVar7);
    local_2a8.ErrorMessage.Chars = (wchar_t *)0x0;
    local_2a8.ErrorCode = Ok;
    local_2a8.SystemErrorCode = 0;
    if ((pFVar7->_padding_ & 4) == 0) {
      pFVar11 = &local_2a8;
    }
    else {
      pFVar11 = &local_58;
      local_58.ErrorMessage.Chars._4_1_ = FOnDemandTocSentinel::SentinelImg[4];
      local_58.ErrorMessage.Chars._5_1_ = FOnDemandTocSentinel::SentinelImg[5];
      local_58.ErrorMessage.Chars._6_1_ = FOnDemandTocSentinel::SentinelImg[6];
      local_58.ErrorMessage.Chars._7_1_ = FOnDemandTocSentinel::SentinelImg[7];
      local_58.ErrorMessage.Chars._0_1_ = FOnDemandTocSentinel::SentinelImg[0];
      local_58.ErrorMessage.Chars._1_1_ = FOnDemandTocSentinel::SentinelImg[1];
      local_58.ErrorMessage.Chars._2_1_ = FOnDemandTocSentinel::SentinelImg[2];
      local_58.ErrorMessage.Chars._3_1_ = FOnDemandTocSentinel::SentinelImg[3];
      local_58.SystemErrorCode._0_1_ = FOnDemandTocSentinel::SentinelImg[0xc];
      local_58.SystemErrorCode._1_1_ = FOnDemandTocSentinel::SentinelImg[0xd];
      local_58.SystemErrorCode._2_1_ = FOnDemandTocSentinel::SentinelImg[0xe];
      local_58.SystemErrorCode._3_1_ = FOnDemandTocSentinel::SentinelImg[0xf];
      local_58.ErrorCode._0_1_ = FOnDemandTocSentinel::SentinelImg[8];
      local_58.ErrorCode._1_1_ = FOnDemandTocSentinel::SentinelImg[9];
      local_58.ErrorCode._2_1_ = FOnDemandTocSentinel::SentinelImg[10];
      local_58.ErrorCode._3_1_ = FOnDemandTocSentinel::SentinelImg[0xb];
    }
    (**(code **)(pFVar7->_padding_ + 0x188))(pFVar7,pFVar11,0x10);
    iVar2 = memcmp(&local_2a8,"-[]--[]--[]--[]-",0x10);
    if (iVar2 != 0) {
      pFVar11 = FIoStatus::FIoStatus(&local_58,CorruptToc);
      TIoStatusOr<UE::IoStore::FOnDemandToc>::TIoStatusOr<UE::IoStore::FOnDemandToc>
                (__return_storage_ptr__,pFVar11);
      (**(code **)pFVar7->_padding_)(pFVar7,1);
      return __return_storage_ptr__;
    }
    (**(code **)(pFVar7->_padding_ + 0x1b8))(pFVar7,0);
  }
  local_348.Header.Version = 0xc;
  local_348.Header.Flags = 0;
  local_348.Header.Magic = 0x6f6e64656d616e64;
  local_348.Header.BlockSize = 0;
  local_348.Header.CompressionFormat.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_348.Header.CompressionFormat.Data.ArrayNum = 0;
  local_348.Header.CompressionFormat.Data.ArrayMax = 0;
  local_348.Header.ChunksDirectory.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_348.Header.ChunksDirectory.Data.ArrayNum = 0;
  local_348.Header.ChunksDirectory.Data.ArrayMax = 0;
  local_348.Header.HostGroupName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_348.Header.HostGroupName.Data.ArrayNum = 0;
  local_348.Header.HostGroupName.Data.ArrayMax = 0;
  local_348.Meta.EpochTimestamp = 0;
  local_348.Meta.BuildVersion.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_348.Meta.BuildVersion.Data.ArrayNum = 0;
  local_348.Meta.BuildVersion.Data.ArrayMax = 0;
  local_348.Meta.TargetPlatform.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_348.Meta.TargetPlatform.Data.ArrayNum = 0;
  local_348.Meta.TargetPlatform.Data.ArrayMax = 0;
  local_348.Containers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_348.Containers.ArrayNum = 0;
  local_348.Containers.ArrayMax = 0;
  local_348.AdditionalFiles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_348.AdditionalFiles.ArrayNum = 0;
  local_348.AdditionalFiles.ArrayMax = 0;
  local_348.TagSets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_348.TagSets.ArrayNum = 0;
  local_348.TagSets.ArrayMax = 0;
  IoStore::operator<<((FArchive *)pFVar7,&local_348);
  if ((pFVar7->_padding_ & 0x600) == 0) {
    TIoStatusOr<UE::IoStore::FOnDemandToc>::TIoStatusOr<UE::IoStore::FOnDemandToc>
              (__return_storage_ptr__,&local_348);
  }
  else {
    pFVar10 = FIoStatusBuilder::FIoStatusBuilder(&local_288,FileNotOpen);
    local_2a8.ErrorCode = Last;
    local_2a8.ErrorMessage.Chars = L"Failed to serialize TOC file";
    pFVar10 = FIoStatusBuilder::operator<<(pFVar10,(TStringView<wchar_t> *)&local_2a8);
    FIoStatusBuilder::operator_FIoStatus(pFVar10,&local_358);
    FIoStatusBuilder::~FIoStatusBuilder(&local_288);
    local_58.ErrorMessage.Chars = local_358.ErrorMessage.Chars;
    if ((FScriptContainerElement *)local_358.ErrorMessage.Chars != (FScriptContainerElement *)0x0) {
      LOCK();
      *(int *)(local_358.ErrorMessage.Chars + -4) = *(int *)(local_358.ErrorMessage.Chars + -4) + 1;
      UNLOCK();
    }
    local_58.SystemErrorCode = local_358.SystemErrorCode;
    local_58.ErrorCode = local_358.ErrorCode;
    TIoStatusOr<UE::IoStore::FOnDemandToc>::TIoStatusOr<UE::IoStore::FOnDemandToc>
              (__return_storage_ptr__,&local_58);
    FIoStatus::~FIoStatus(&local_358);
  }
  DestructItems<UE::IoStore::FOnDemandTocTagSet,int>
            ((FOnDemandTocTagSet *)local_348.TagSets.AllocatorInstance.Data,
             local_348.TagSets.ArrayNum);
  if ((FOnDemandTocTagSet *)local_348.TagSets.AllocatorInstance.Data != (FOnDemandTocTagSet *)0x0) {
    FMemory::Free(local_348.TagSets.AllocatorInstance.Data);
  }
  DestructItems<UE::IoStore::FOnDemandTocAdditionalFile,int>
            ((FOnDemandTocAdditionalFile *)local_348.AdditionalFiles.AllocatorInstance.Data,
             local_348.AdditionalFiles.ArrayNum);
  if ((FOnDemandTocAdditionalFile *)local_348.AdditionalFiles.AllocatorInstance.Data !=
      (FOnDemandTocAdditionalFile *)0x0) {
    FMemory::Free(local_348.AdditionalFiles.AllocatorInstance.Data);
  }
  DestructItems<UE::IoStore::FOnDemandTocContainerEntry,int>
            ((FOnDemandTocContainerEntry *)local_348.Containers.AllocatorInstance.Data,
             local_348.Containers.ArrayNum);
  if ((FOnDemandTocContainerEntry *)local_348.Containers.AllocatorInstance.Data !=
      (FOnDemandTocContainerEntry *)0x0) {
    FMemory::Free(local_348.Containers.AllocatorInstance.Data);
  }
  if (local_348.Meta.TargetPlatform.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_348.Meta.TargetPlatform.Data.AllocatorInstance.Data);
  }
  if (local_348.Meta.BuildVersion.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_348.Meta.BuildVersion.Data.AllocatorInstance.Data);
  }
  if (local_348.Header.HostGroupName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_348.Header.HostGroupName.Data.AllocatorInstance.Data);
  }
  if (local_348.Header.ChunksDirectory.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
     ) {
    FMemory::Free(local_348.Header.ChunksDirectory.Data.AllocatorInstance.Data);
  }
  if (local_348.Header.CompressionFormat.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_348.Header.CompressionFormat.Data.AllocatorInstance.Data);
  }
  (**(code **)pFVar7->_padding_)(pFVar7,1);
  return __return_storage_ptr__;
}

